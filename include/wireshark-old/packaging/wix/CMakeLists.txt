# CMakeLists.txt
#
# Wireshark - Network traffic analyzer
# By Gerald Combs <gerald@wireshark.org>
# Copyright 1998 Gerald Combs
#
# SPDX-License-Identifier: GPL-2.0-or-later
#

# We should use CPack to help generate a .msi using WIX.

set(WIX_GENERATED_FILES
	${CMAKE_CURRENT_BINARY_DIR}/DependentComponents.wxs
	${CMAKE_CURRENT_BINARY_DIR}/Diameter.wxs
	${CMAKE_CURRENT_BINARY_DIR}/QtDependentComponents.wxs
	${CMAKE_CURRENT_BINARY_DIR}/QtTranslation.wxs
	${CMAKE_CURRENT_BINARY_DIR}/RadiusDict.wxs
	${CMAKE_CURRENT_BINARY_DIR}/SNMPMibs.wxs
)
set(WIX_GENERATED_FILES ${WIX_GENERATED_FILES} PARENT_SCOPE)

set(WIX_SOURCE_FILES
	${CMAKE_SOURCE_DIR}/packaging/wix/Wireshark.wxs
	${CMAKE_SOURCE_DIR}/packaging/wix/WiresharkOptionsDlg.wxs
	${CMAKE_SOURCE_DIR}/packaging/wix/WiresharkWixUI.wxs
	${WIX_GENERATED_FILES}
)
set(WIX_SOURCE_FILES ${WIX_SOURCE_FILES} PARENT_SCOPE)

set(WIX_FILES
	ComponentGroups.wxi
	COPYING.rtf
	DirectoryStructure.wxi
	Features.wxi
	InputPaths.wxi
	Plugins.wxi
	Prerequisites.wxi
	UserInterface.wxi
	${WIX_SOURCE_FILES}
	PARENT_SCOPE
)

set(WIX_OUT_FILES
	${CMAKE_CURRENT_BINARY_DIR}/DependentComponents.wixobj
	${CMAKE_CURRENT_BINARY_DIR}/Diameter.wixobj
	${CMAKE_CURRENT_BINARY_DIR}/QtDependentComponents.wixobj
	${CMAKE_CURRENT_BINARY_DIR}/QtTranslation.wixobj
	${CMAKE_CURRENT_BINARY_DIR}/RadiusDict.wixobj
	${CMAKE_CURRENT_BINARY_DIR}/SNMPMibs.wixobj
	${CMAKE_CURRENT_BINARY_DIR}/Wireshark.wixobj
	${CMAKE_CURRENT_BINARY_DIR}/WiresharkOptionsDlg.wixobj
	${CMAKE_CURRENT_BINARY_DIR}/WiresharkWixUI.wixobj
)
set(WIX_OUT_FILES ${WIX_OUT_FILES} PARENT_SCOPE)

# Variables required for Wireshark.wxs
set(PROGRAM_NAME ${CMAKE_PROJECT_NAME})
file(TO_NATIVE_PATH "${CMAKE_SOURCE_DIR}" TOP_SRC_DIR)
# STAGING_DIR depends on the build configuration so we pass it
# on the command line below.
file(TO_NATIVE_PATH "${CMAKE_BINARY_DIR}/docbook" USER_GUIDE_DIR)
if(WIRESHARK_TARGET_PLATFORM STREQUAL "win32")
	set(TARGET_MACHINE x86)
elseif(WIRESHARK_TARGET_PLATFORM STREQUAL "win64")
	set(TARGET_MACHINE x64)
else()
	message(FATAL_ERROR "Your mysterious moon-man architecture \"${WIRESHARK_TARGET_PLATFORM}\" frightens and confuses us.")
endif()

set(PRODUCT_VERSION ${PROJECT_MAJOR_VERSION}.${PROJECT_MINOR_VERSION}.${PROJECT_PATCH_VERSION}.${PROJECT_BUILD_VERSION})

# To do:
# - Sync the various version names between CMake and Wix.
# - Set CMakeLists.txt version strings in tools/make-version.pl
# - Add a VERSION_EXTRA cmake option
set (VERSION "${PROJECT_VERSION}")
set (PRODUCT_VERSION=${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_MICRO}.${VERSION_BUILD})

# Use the merge module that comes with our version of Visual Studio
if(MSVC_VERSION GREATER_EQUAL 1910)
	set (MSVC_CRT_VERSION "VC141")
elseif(MSVC_VERSION GREATER_EQUAL 1900)
	set (MSVC_CRT_VERSION "VC140")
endif()

set(MERGE_MODULE "Microsoft_${MSVC_CRT_VERSION}_CRT_${TARGET_MACHINE}.msm")
set (PF86_ENV "ProgramFiles(x86)")

set(VC_TOOLS_MERGE_MODULES_DIR)
if (DEFINED ENV{VCToolsRedistDir})
	set(VC_TOOLS_MERGE_MODULES_DIR "$ENV{VCToolsRedistDir}/MergeModules")
endif()

find_path(MERGE_MODULE_DIR ${MERGE_MODULE}
	PATHS
		#"$ENV{VCINSTALLDIR}/VC/Redist/MSVC/how-do-we-get-this-version/Merge Modules"
		${VC_TOOLS_MERGE_MODULES_DIR}
		"$ENV{${PF86_ENV}}/Common Files/Merge Modules"
		"$ENV{PROGRAMFILES}/Common Files/Merge Modules"
	NO_DEFAULT_PATH
)
file(TO_NATIVE_PATH "${MERGE_MODULE_DIR}/Microsoft_${MSVC_CRT_VERSION}_CRT_${TARGET_MACHINE}.msm" MSM_NATIVE_PATH)
message(STATUS "Using ${MSM_NATIVE_PATH} for the WiX installer")

# DependentComponents.wxi. Can be created at configure time.
set(_all_manifest_wix "${CMAKE_CURRENT_BINARY_DIR}/DependentComponents.wxs")
file(WRITE "${_all_manifest_wix}" "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n")
file(APPEND "${_all_manifest_wix}" "<Wix xmlns=\"http://schemas.microsoft.com/wix/2006/wi\">\n\n")
file(APPEND "${_all_manifest_wix}" "  <!-- Files required for all sections. Generated by CMake. -->\n")
file(APPEND "${_all_manifest_wix}"  "<?include InputPaths.wxi ?>\n")
file(APPEND "${_all_manifest_wix}" "  <Fragment>\n")
file(APPEND "${_all_manifest_wix}" "    <DirectoryRef Id=\"INSTALLFOLDER\">\n")
SET(unique_component "")
foreach(_dll ${GLIB2_DLLS} ${CARES_DLL} ${GCRYPT_DLLS}
		${GNUTLS_DLLS} ${KERBEROS_DLLS} ${LIBSSH_DLL} ${LUA_DLL}
		${LZ4_DLL} ${NGHTTP2_DLL} ${SBC_DLL} ${SMI_DLL} ${SNAPPY_DLL}
		${SPANDSP_DLL} ${BCG729_DLL} ${LIBXML2_DLL} ${WINSPARKLE_DLL}
		${ZLIB_DLL}
		# Required for mmdbresolve
		${MAXMINDDB_DLL}
	)
	#ensure uniqueness of files
	IF(NOT "${unique_component}" MATCHES "(^|;)${_dll}(;|$)")
		STRING(REGEX REPLACE "[-|\\.]" "_" _wix_name ${_dll})
		file(APPEND "${_all_manifest_wix}" "       <Component Id=\"cmp${_wix_name}\" Guid=\"*\">\n")
		file(APPEND "${_all_manifest_wix}" "         <File Id=\"fil${_wix_name}\" KeyPath=\"yes\" Source=\"$(var.Staging.Dir)\\${_dll}\"/>\n")
		file(APPEND "${_all_manifest_wix}" "       </Component>\n")
		SET(unique_component ${unique_component} ${_dll})
	ENDIF(NOT "${unique_component}" MATCHES "(^|;)${_dll}(;|$)")
endforeach()
foreach(_script "init.lua" "console.lua" "dtd_gen.lua")
	STRING(REGEX REPLACE "[-|\\.]" "_" _wix_name ${_script})
	file(APPEND "${_all_manifest_wix}" "       <Component Id=\"cmp${_wix_name}\" Guid=\"*\">\n")
	file(APPEND "${_all_manifest_wix}" "         <File Id=\"fil${_wix_name}\" KeyPath=\"yes\" Source=\"$(var.Staging.Dir)\\${_script}\"/>\n")
	file(APPEND "${_all_manifest_wix}" "       </Component>\n")
endforeach()
file(APPEND "${_all_manifest_wix}" "    </DirectoryRef>\n")
file(APPEND "${_all_manifest_wix}" "  </Fragment>\n")
file(APPEND "${_all_manifest_wix}" "  <Fragment>\n")
file(APPEND "${_all_manifest_wix}" "    <ComponentGroup Id=\"CG.RequiredDependencies\">\n")
SET(unique_file "")
foreach(_dll ${GLIB2_DLLS} ${CARES_DLL} ${GCRYPT_DLLS}
		${GNUTLS_DLLS} ${KERBEROS_DLLS} ${LIBSSH_DLL} ${LUA_DLL}
		${LZ4_DLL} ${NGHTTP2_DLL} ${SBC_DLL} ${SMI_DLL} ${SNAPPY_DLL}
		${SPANDSP_DLL} ${BCG729_DLL} ${LIBXML2_DLL} ${WINSPARKLE_DLL}
		${ZLIB_DLL}
		# mmdbresolve
		${MAXMINDDB_DLL}
	)
	#ensure uniqueness of files
	IF(NOT "${unique_file}" MATCHES "(^|;)${_dll}(;|$)")
		STRING(REGEX REPLACE "[-|\\.]" "_" _wix_name ${_dll})
		file(APPEND "${_all_manifest_wix}" "       <ComponentRef Id=\"cmp${_wix_name}\" />\n")
		SET(unique_file ${unique_file} ${_dll})
	ENDIF(NOT "${unique_file}" MATCHES "(^|;)${_dll}(;|$)")
endforeach()
foreach(_script "init.lua" "console.lua" "dtd_gen.lua")
	STRING(REGEX REPLACE "[-|\\.]" "_" _wix_name ${_script})
	file(APPEND "${_all_manifest_wix}" "       <ComponentRef Id=\"cmp${_wix_name}\" />\n")
endforeach()
file(APPEND "${_all_manifest_wix}" "    </ComponentGroup>\n")
file(APPEND "${_all_manifest_wix}" "  </Fragment>\n")
file(APPEND "${_all_manifest_wix}" "\n</Wix>\n")


if(SMI_DIR)
	set(d_smi_dir "-dSMI_DIR")
endif()

if (MAXMINDDB_FOUND)
	set(d_mmdbresolve_exe "-dMMDBRESOLVE_EXE")
endif()

set(WIX_CANDLE_DEFINES
	-v
	-sw1076
	-dPlatform=${TARGET_MACHINE}
	-dWiresharkName=${CMAKE_PROJECT_NAME}
	-dWiresharkVersion=${PRODUCT_VERSION}
	-dWiresharkMajorVersion=${PROJECT_MAJOR_VERSION}
	-dWiresharkMinorVersion=${PROJECT_MINOR_VERSION}
	-dAssetDir=${CMAKE_SOURCE_DIR}/packaging/wix
	-dBuildOutputDir=${EXECUTABLE_OUTPUT_PATH}/${CMAKE_BUILD_TYPE}
	-dDiameterDir=${ARCHIVE_OUTPUT_PATH}/${CMAKE_BUILD_TYPE}/diameter
	-dIconDir=${CMAKE_SOURCE_DIR}/image
	-dQtTranslationDir=${ARCHIVE_OUTPUT_PATH}/${CMAKE_BUILD_TYPE}/translations
	-dRadiusDictDir=${ARCHIVE_OUTPUT_PATH}/${CMAKE_BUILD_TYPE}/radius
	-dSnmpMibDir=${ARCHIVE_OUTPUT_PATH}/${CMAKE_BUILD_TYPE}/snmp/mibs
	-dVCRedistVersion=${MSVC_CRT_VERSION}
	-dVCRedistDir=${MERGE_MODULE_DIR}
	${d_smi_dir}
	${d_mmdbresolve_exe}
	-arch ${TARGET_MACHINE}
	-ext WixUIExtension
	-I${CMAKE_SOURCE_DIR}/packaging/wix
	-out ${CMAKE_CURRENT_BINARY_DIR}/
	PARENT_SCOPE
)

# The NSIS CMakeFile sets the program name + version slightly differently.
set(WIX_LIGHT_DEFINES
	-v
	-out ${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_PROJECT_NAME}-${WIRESHARK_TARGET_PLATFORM}-${PROJECT_VERSION}.msi
	-sw1076
	-ext WixUIExtension
	-loc ${CMAKE_CURRENT_SOURCE_DIR}/StringOverrides.wxl
	PARENT_SCOPE
)

set(WIX_HEAT_FLAGS
	-v
	-ag
	-nologo
	-srd
	-sreg
	PARENT_SCOPE
)

macro( ADD_WIX_PACKAGE_TARGET )
	#
	# XXX - if we're not building Wireshark, we can't build
	# QtDependentComponents.wxs..  On the other hand, if we're
	# not building Wireshark, we have no need to include Qt
	# in the installer, so it's not clear we need that file.
	#
	# This should probably be fixed, so that people can produce
	# command-line-only installer packages.
	if(BUILD_wireshark)
		set (_wix_source_dir ${CMAKE_SOURCE_DIR}/packaging/wix )
		set (_wix_binary_dir ${CMAKE_BINARY_DIR}/packaging/wix )

		# QtDependentComponents.wxs. Created using Wireshark.exe.
		add_custom_command(OUTPUT ${_wix_binary_dir}/QtDependentComponents.wxs
			COMMAND set "PATH=${QT_BIN_PATH};%PATH%"
			COMMAND ${POWERSHELL_COMMAND} "${_wix_source_dir}/windeployqt-to-wix.ps1"
				-Executable $<TARGET_FILE:wireshark>
				-FilePath ${_wix_binary_dir}/QtDependentComponents.wxs
		)

		# SNMPMibs.wxs. Collects all MIBs in "output" snmp/mibs
		# directory. Generated with heat.exe
		add_custom_command(OUTPUT ${_wix_binary_dir}/SNMPMibs.wxs
			COMMAND ${WIX_HEAT_EXECUTABLE} dir ${ARCHIVE_OUTPUT_PATH}/${CMAKE_BUILD_TYPE}/snmp/mibs
					${WIX_HEAT_FLAGS} -cg CG.Plugins.SNMP -dr dirSnmpMibs -var var.SnmpMibDir
					-out ${_wix_binary_dir}/SNMPMibs.wxs
		)

		# RadiusDict.wxs. Collects all Radius dictionary files in
		# "output" radius directory. Generated with heat.exe
		add_custom_command(OUTPUT ${_wix_binary_dir}/RadiusDict.wxs
			COMMAND ${WIX_HEAT_EXECUTABLE} dir ${ARCHIVE_OUTPUT_PATH}/${CMAKE_BUILD_TYPE}/radius
					${WIX_HEAT_FLAGS} -cg CG.RadiusDict -dr dirRadius -var var.RadiusDictDir
					-out ${_wix_binary_dir}/RadiusDict.wxs
		)

		# Diameter.wxs. Collects all Diameter XML dictionary files
		# in "output" diameter directory. Generated with heat.exe
		add_custom_command(OUTPUT ${_wix_binary_dir}/Diameter.wxs
			COMMAND ${WIX_HEAT_EXECUTABLE} dir ${ARCHIVE_OUTPUT_PATH}/${CMAKE_BUILD_TYPE}/diameter
					${WIX_HEAT_FLAGS} -cg CG.Diameter -dr dirDiameter -var var.DiameterDir
					-out ${_wix_binary_dir}/Diameter.wxs
		)

		# QtTranslation.wxs. Collects all Qt translation files in
		# "output" translations directory. Generated with heat.exe
		add_custom_command(OUTPUT ${_wix_binary_dir}/QtTranslation.wxs
			COMMAND ${WIX_HEAT_EXECUTABLE} dir ${ARCHIVE_OUTPUT_PATH}/${CMAKE_BUILD_TYPE}/translations
					${WIX_HEAT_FLAGS} -cg CG.QtTranslations -dr dirTranslations -var var.QtTranslationDir
					-out ${_wix_binary_dir}/QtTranslation.wxs
		)

		# Build WiX package dependencies. We build the package in
		# two stages so that wix_package below doesn't trigger any
		# dependencies that might clobber any signed executables.
		add_custom_target(wix_package_prep
			DEPENDS
				${WIX_FILES}
				copy_data_files
				user_guide_chm
		)
		set_target_properties(wix_package_prep PROPERTIES FOLDER "Packaging")

		# Dump the installer into
		# ${CMAKE_CURRENT_SOURCE_DIR}/packaging/wix
		# Note that executables and DLLs *must* be built separately
		add_custom_target(wix_package
			COMMAND ${WIX_CANDLE_EXECUTABLE} ${WIX_CANDLE_DEFINES} ${WIX_SOURCE_FILES}
			WORKING_DIRECTORY ${_wix_source_dir}

			COMMAND ${WIX_LIGHT_EXECUTABLE} ${WIX_LIGHT_DEFINES} ${WIX_OUT_FILES}
			WORKING_DIRECTORY ${_wix_binary_dir}
		)
		set_target_properties(wix_package PROPERTIES FOLDER "Packaging")
	else()
		message(WARNING "The WiX installer cannot be built if the Wireshark program isn't built.")
	endif()
endmacro( ADD_WIX_PACKAGE_TARGET )

set(CLEAN_FILES
	DependentComponents.wxs
	QtDependentComponents.wxs
	SNMPMibs.wxs
	RadiusDict.wxs
	Diameter.wxs
	QtTranslation.wxs
	#NEWS.txt
	#user-guide.chm
	wireshark-$(WIRESHARK_TARGET_PLATFORM)-$(VERSION).exe
)
