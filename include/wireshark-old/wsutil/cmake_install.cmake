# Install script for directory: /home/kali/wireshark-old/wireshark-old/wsutil

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwsutil.so.10.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwsutil.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/kali/wireshark-old/wireshark-old/run/libwsutil.so.10.0.0"
    "/home/kali/wireshark-old/wireshark-old/run/libwsutil.so.10"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwsutil.so.10.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwsutil.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH ":::::::"
           NEW_RPATH "$ORIGIN")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/kali/wireshark-old/wireshark-old/run/libwsutil.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/wireshark/wsutil" TYPE FILE FILES
    "/home/kali/wireshark-old/wireshark-old/wsutil/adler32.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/base32.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/bits_count_ones.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/bits_ctz.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/bitswap.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/buffer.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/color.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/copyright_info.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/cpu_info.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/crash_info.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/crc6.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/crc7.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/crc8.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/crc10.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/crc11.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/crc16.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/crc16-plain.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/crc32.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/curve25519.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/eax.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/filesystem.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/frequency-utils.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/g711.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/inet_addr.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/inet_ipv4.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/inet_ipv6.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/interface.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/jsmn.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/json_dumper.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/mpeg-audio.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/netlink.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/nstime.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/os_version_info.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/pint.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/plugins.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/pow2.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/privileges.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/processes.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/report_message.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/sign_ext.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/sober128.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/socket.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/str_util.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/strnatcmp.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/strtoi.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/tempfile.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/time_util.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/type_util.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/unicode-utils.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/utf8_entities.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/ws_cpuid.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/ws_mempbrk.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/ws_mempbrk_int.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/ws_pipe.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/ws_printf.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/wsjson.h"
    "/home/kali/wireshark-old/wireshark-old/wsutil/xtea.h"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/kali/wireshark-old/wireshark-old/wsutil/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
