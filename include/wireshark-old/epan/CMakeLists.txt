# CMakeLists.txt
#
# Wireshark - Network traffic analyzer
# By Gerald Combs <gerald@wireshark.org>
# Copyright 1998 Gerald Combs
#
# SPDX-License-Identifier: GPL-2.0-or-later
#

include(UseABICheck)

if (HAVE_HFI_SECTION_INIT)
	add_definitions(
		-DHAVE_HFI_SECTION_INIT
	)
endif()

include_directories(
		${GLIB2_INCLUDE_DIRS}
		${CARES_INCLUDE_DIRS}
		${GCRYPT_INCLUDE_DIRS}
		${GTHREAD2_INCLUDE_DIRS}
		${GNUTLS_INCLUDE_DIRS}
		${KERBEROS_INCLUDE_DIRS}
		${LUA_INCLUDE_DIRS}
		${LZ4_INCLUDE_DIRS}
		${NGHTTP2_INCLUDE_DIRS}
		${PCAP_INCLUDE_DIRS}
		${SMI_INCLUDE_DIRS}
		${SNAPPY_INCLUDE_DIRS}
		${ZLIB_INCLUDE_DIRS}
		${LIBXML2_INCLUDE_DIRS}
)

add_definitions(
		${LIBXML2_DEFINITIONS}
		${KERBEROS_DEFINITIONS}
)

add_subdirectory(crypt)
add_subdirectory(dfilter)
add_subdirectory(dissectors)
add_subdirectory(ftypes)
add_subdirectory(wmem)
if(LUA_FOUND)
	add_subdirectory(wslua)
endif()

include_directories(
	${CMAKE_CURRENT_BINARY_DIR}
	${CMAKE_CURRENT_SOURCE_DIR}
)

add_custom_command(
	OUTPUT ps.c
	COMMAND ${PYTHON_EXECUTABLE}
		${CMAKE_SOURCE_DIR}/tools/rdps.py
		${CMAKE_CURRENT_SOURCE_DIR}/print.ps
		ps.c
	DEPENDS
		${CMAKE_SOURCE_DIR}/tools/rdps.py
		${CMAKE_CURRENT_SOURCE_DIR}/print.ps
)

set(LIBWIRESHARK_PUBLIC_HEADERS
	addr_and_mask.h
	addr_resolv.h
	address.h
	address_types.h
	afn.h
	aftypes.h
	app_mem_usage.h
	arcnet_pids.h
	arptypes.h
	asn1.h
	ax25_pids.h
	bridged_pids.h
	capture_dissectors.h
	charsets.h
	chdlctypes.h
	color_filters.h
	column.h
	column-info.h
	column-utils.h
	conversation.h
	conversation_debug.h
	conversation_table.h
	conv_id.h
	crc10-tvb.h
	crc16-tvb.h
	crc32-tvb.h
	crc6-tvb.h
	crc8-tvb.h
	decode_as.h
	diam_dict.h
	disabled_protos.h
	dissector_filters.h
	dtd.h
	dtd_parse.h
	dvb_chartbl.h
	eap.h
	eapol_keydes_types.h
	epan.h
	epan_dissect.h
	etypes.h
	ex-opt.h
	except.h
	exceptions.h
	expert.h
	export_object.h
	exported_pdu.h
	filter_expressions.h
	follow.h
	frame_data.h
	frame_data_sequence.h
	funnel.h
	garrayfix.h
	#geoip_db.h
	golay.h
	guid-utils.h
	iana_charsets.h
	iax2_codec_type.h
	in_cksum.h
	ip_opts.h
	ipproto.h
	ipv4.h
	ipv6.h
	lapd_sapi.h
	llcsaps.h
	maxmind_db.h
	media_params.h
	next_tvb.h
	nlpid.h
	oids.h
	osi-utils.h
	oui.h
	packet.h
	packet_info.h
	params.h
	plugin_if.h
	ppptypes.h
	print.h
	print_stream.h
	prefs.h
	prefs-int.h
	proto.h
	proto_data.h
	ps.h
	ptvcursor.h
	range.h
	reassemble.h
	reedsolomon.h
	register.h
	req_resp_hdrs.h
	rtd_table.h
	rtp_pt.h
	sctpppids.h
	secrets.h
	show_exception.h
	slow_protocol_subtypes.h
	sminmpec.h
	srt_table.h
	stat_tap_ui.h
	stat_groups.h
	stats_tree.h
	stats_tree_priv.h
	stream.h
	strutil.h
	t35.h
	tap.h
	tap-voip.h
	timestamp.h
	timestats.h
	tfs.h
	time_fmt.h
	to_str.h
	tvbparse.h
	tvbuff.h
	tvbuff-int.h
	uat.h
	uat-int.h
	unit_strings.h
	value_string.h
	x264_prt_id.h
	xdlc.h
)

set(LIBWIRESHARK_NONGENERATED_FILES
	addr_and_mask.c
	addr_resolv.c
	address_types.c
	afn.c
	aftypes.c
	app_mem_usage.c
	asn1.c
	capture_dissectors.c
	charsets.c
	color_filters.c
	column.c
	column-utils.c
	conversation.c
	conversation_table.c
	crc10-tvb.c
	crc16-tvb.c
	crc32-tvb.c
	crc6-tvb.c
	crc8-tvb.c
	decode_as.c
	disabled_protos.c
	dissector_filters.c
	dvb_chartbl.c
	epan.c
	ex-opt.c
	except.c
	expert.c
	export_object.c
	exported_pdu.c
	filter_expressions.c
	follow.c
	frame_data.c
	frame_data_sequence.c
	funnel.c
	#geoip_db.c
	golay.c
	guid-utils.c
	iana_charsets.c
	in_cksum.c
	ipproto.c
	maxmind_db.c
	media_params.c
	next_tvb.c
	oids.c
	osi-utils.c
	packet.c
	plugin_if.c
	print.c
	print_stream.c
	prefs.c
	proto.c
	proto_data.c
	range.c
	reassemble.c
	reedsolomon.c
	register.c
	req_resp_hdrs.c
	rtd_table.c
	secrets.c
	sequence_analysis.c
	show_exception.c
	srt_table.c
	stat_tap_ui.c
	stats_tree.c
	strutil.c
	stream.c
	t35.c
	tap.c
	timestamp.c
	timestats.c
	tfs.c
	to_str.c
	tvbparse.c
	tvbuff.c
	tvbuff_base64.c
	tvbuff_composite.c
	tvbuff_real.c
	tvbuff_subset.c
	tvbuff_zlib.c
	uat.c
	value_string.c
	unit_strings.c
	xdlc.c
	${CMAKE_CURRENT_BINARY_DIR}/ps.c
)

set(LIBWIRESHARK_FILES ${LIBWIRESHARK_NONGENERATED_FILES})

add_lex_files(LEX_FILES LIBWIRESHARK_FILES
	diam_dict.l
	dtd_parse.l
	dtd_preparse.l
	radius_dict.l
	uat_load.l
)

add_lemon_files(LEMON_FILES LIBWIRESHARK_FILES
	dtd_grammar.lemon
)

set_source_files_properties(
	${LIBWIRESHARK_FILES}
	PROPERTIES
	COMPILE_FLAGS "${WERROR_COMMON_FLAGS}"
)

add_library(epan
	${LIBWIRESHARK_FILES}
	$<TARGET_OBJECTS:crypt>
	$<TARGET_OBJECTS:dfilter>
	$<TARGET_OBJECTS:dissectors>
	$<TARGET_OBJECTS:dissectors-corba>
	$<TARGET_OBJECTS:ftypes>
	$<TARGET_OBJECTS:version_info>
	$<TARGET_OBJECTS:wmem>
	$<$<BOOL:${LUA_FOUND}>:$<TARGET_OBJECTS:wslua>>
	${CMAKE_BINARY_DIR}/image/libwireshark.rc
)

if(ENABLE_PLUGINS)
	target_compile_definitions(epan PUBLIC HAVE_PLUGINS)
endif()

set_target_properties(epan PROPERTIES
	COMPILE_DEFINITIONS "WS_BUILD_DLL"
	LINK_FLAGS "${WS_LINK_FLAGS}"
	VERSION "12.0.0" SOVERSION 12
	INSTALL_RPATH "${LIBRARY_INSTALL_RPATH}"
)

ABICHECK(libwireshark)

set(TOP_LEVEL_HEADERS ${CMAKE_BINARY_DIR}/config.h)
file(GLOB CRYPT_HEADERS crypt/*.h)
file(GLOB DFILTER_HEADERS dfilter/*.h ../tools/lemon/cppmagic.h)
file(GLOB D_HEADERS dissectors/*.h)
file(GLOB FTYPES_HEADERS ftypes/*.h)
file(GLOB WMEM_HEADERS wmem/*.h)

add_custom_command(OUTPUT libwireshark.abi.tar.gz
	COMMAND ${CMAKE_COMMAND} -E remove_directory ${ABICHECK_TMPDIR}
	COMMAND ${CMAKE_COMMAND} -E make_directory ${ABICHECK_TMPDIR}
	COMMAND ${CMAKE_COMMAND} -E make_directory ${ABICHECK_TMPDIR}/epan
	COMMAND ${CMAKE_COMMAND} -E make_directory ${ABICHECK_TMPDIR}/crypt
	COMMAND ${CMAKE_COMMAND} -E make_directory ${ABICHECK_TMPDIR}/dfilter
	COMMAND ${CMAKE_COMMAND} -E make_directory ${ABICHECK_TMPDIR}/dissectors
	COMMAND ${CMAKE_COMMAND} -E make_directory ${ABICHECK_TMPDIR}/ftypes
	COMMAND ${CMAKE_COMMAND} -E make_directory ${ABICHECK_TMPDIR}/wmem
	COMMAND ${ABI_COPY_COMMAND} ${TOP_LEVEL_HEADERS} ${ABICHECK_TMPDIR} ${ABI_COPY_FLAGS}
	COMMAND ${ABI_COPY_COMMAND} ${ABICHECK_HEADERS} ${ABICHECK_TMPDIR}/epan ${ABI_COPY_FLAGS}
	COMMAND ${ABI_COPY_COMMAND} ${CRYPT_HEADERS} ${ABICHECK_TMPDIR}/crypt ${ABI_COPY_FLAGS}
	COMMAND ${ABI_COPY_COMMAND} ${DFILTER_HEADERS} ${ABICHECK_TMPDIR}/dfilter ${ABI_COPY_FLAGS}
	COMMAND ${ABI_COPY_COMMAND} ${D_HEADERS} ${ABICHECK_TMPDIR}/dissectors ${ABI_COPY_FLAGS}
	COMMAND ${ABI_COPY_COMMAND} ${FTYPES_HEADERS} ${ABICHECK_TMPDIR}/ftypes ${ABI_COPY_FLAGS}
	COMMAND ${ABI_COPY_COMMAND} ${WMEM_HEADERS} ${ABICHECK_TMPDIR}/wmem ${ABI_COPY_FLAGS}
	COMMAND rm -f ${ABICHECK_TMPDIR}/dissectors/x11-extension-implementation.h
		${ABICHECK_TMPDIR}/dissectors/packet-rtps.h
		${ABICHECK_TMPDIR}/dissectors/x11-glx-render-enum.h
		${ABICHECK_TMPDIR}/dissectors/x11-register-info.h
		${ABICHECK_TMPDIR}/dissectors/packet-idmp.h
	COMMAND ${ABICHECK_COMMAND}
	COMMAND cp ${CMAKE_CURRENT_BINARY_DIR}/abi_dumps/libwireshark/libwireshark_* ${CMAKE_CURRENT_BINARY_DIR}/libwireshark.abi.tar.gz
	COMMAND rm -rf ${ABICHECK_TMPDIR} ${CMAKE_CURRENT_BINARY_DIR}/abi_dumps
#	COMMAND rm -rf ${CMAKE_CURRENT_BINARY_DIR}/abi_dumps ${ABICHECK_TMPDIR}/config.h
#		${ABICHECK_TMPDIR}/epan/* ${ABICHECK_TMPDIR}/crypt/*
#		${ABICHECK_TMPDIR}/dfilter/* ${ABICHECK_TMPDIR}/dissectors/*
#		${ABICHECK_TMPDIR}/ftypes/* ${ABICHECK_TMPDIR}/wmem/*
	DEPENDS ${HEADERS}
		${CRYPT_HEADERS} ${DFILTER_HEADERS} ${D_HEADERS}
		${FTYPES_HEADERS} ${WMEM_HEADERS} epan)

# By default the name for a library with target name epan will be libepan,
# but Ethereal is now named Wireshark
set_target_properties(epan PROPERTIES
	OUTPUT_NAME "wireshark"
	PREFIX "lib"
	FOLDER "DLLs"
)

target_link_libraries(epan
	PUBLIC
		wiretap
		wsutil
		${GLIB2_LIBRARIES}
	PRIVATE
		${CARES_LIBRARIES}
		${GCRYPT_LIBRARIES}
		${GIO2_LIBRARIES}
		${GTHREAD2_LIBRARIES}
		${GNUTLS_LIBRARIES}
		${KERBEROS_LIBRARIES}
		${LUA_LIBRARIES}
		${LZ4_LIBRARIES}
		${M_LIBRARIES}
		${NGHTTP2_LIBRARIES}
		${PCAP_LIBRARIES}
		${SMI_LIBRARIES}
		${SNAPPY_LIBRARIES}
		${WIN_PSAPI_LIBRARY}
		${LIBXML2_LIBRARIES}
		${ZLIB_LIBRARIES}
)

target_include_directories(epan
	INTERFACE
	$<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}>
	$<INSTALL_INTERFACE:include/wireshark>
)

target_include_directories(epan SYSTEM PUBLIC ${GLIB2_INCLUDE_DIRS})

add_dependencies(epan lemon)

install(TARGETS epan
	EXPORT WiresharkTargets
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

install(FILES ${LIBWIRESHARK_PUBLIC_HEADERS}
	DESTINATION "${PROJECT_INSTALL_INCLUDEDIR}/epan"
)

add_executable(exntest EXCLUDE_FROM_ALL exntest.c except.c)
target_link_libraries(exntest ${GLIB2_LIBRARIES})
set_target_properties(exntest PROPERTIES
	FOLDER "Tests"
	EXCLUDE_FROM_DEFAULT_BUILD True
	COMPILE_DEFINITIONS "WS_BUILD_DLL"
)

add_executable(oids_test EXCLUDE_FROM_ALL oids_test.c)
target_link_libraries(oids_test epan ${ZLIB_LIBRARIES})
set_target_properties(oids_test PROPERTIES
	FOLDER "Tests"
	EXCLUDE_FROM_DEFAULT_BUILD True
	COMPILE_DEFINITIONS "WS_BUILD_DLL"
)

add_executable(reassemble_test EXCLUDE_FROM_ALL reassemble_test.c)
target_link_libraries(reassemble_test epan)
set_target_properties(reassemble_test PROPERTIES
	FOLDER "Tests"
	EXCLUDE_FROM_DEFAULT_BUILD True
)

add_executable(tvbtest EXCLUDE_FROM_ALL tvbtest.c)
target_link_libraries(tvbtest epan)
set_target_properties(tvbtest PROPERTIES
	FOLDER "Tests"
	EXCLUDE_FROM_DEFAULT_BUILD True
	COMPILE_DEFINITIONS "WS_BUILD_DLL"
)

CHECKAPI(
	NAME
	  epan
	SWITCHES
	  --group termoutput:10 --summary-group termoutput --build
	SOURCES
	  ${LIBWIRESHARK_NONGENERATED_FILES}
)

#
# Editor modelines  -  http://www.wireshark.org/tools/modelines.html
#
# Local variables:
# c-basic-offset: 8
# tab-width: 8
# indent-tabs-mode: t
# End:
#
# vi: set shiftwidth=8 tabstop=8 noexpandtab:
# :indentSize=8:tabSize=8:noTabs=false:
#
