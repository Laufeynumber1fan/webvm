# Install script for directory: /home/kali/wireshark-old/wireshark-old/epan

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwireshark.so.12.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwireshark.so.12"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/kali/wireshark-old/wireshark-old/run/libwireshark.so.12.0.0"
    "/home/kali/wireshark-old/wireshark-old/run/libwireshark.so.12"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwireshark.so.12.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libwireshark.so.12"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "\$ORIGIN:"
           NEW_RPATH "$ORIGIN")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/kali/wireshark-old/wireshark-old/run/libwireshark.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/wireshark/epan" TYPE FILE FILES
    "/home/kali/wireshark-old/wireshark-old/epan/addr_and_mask.h"
    "/home/kali/wireshark-old/wireshark-old/epan/addr_resolv.h"
    "/home/kali/wireshark-old/wireshark-old/epan/address.h"
    "/home/kali/wireshark-old/wireshark-old/epan/address_types.h"
    "/home/kali/wireshark-old/wireshark-old/epan/afn.h"
    "/home/kali/wireshark-old/wireshark-old/epan/aftypes.h"
    "/home/kali/wireshark-old/wireshark-old/epan/app_mem_usage.h"
    "/home/kali/wireshark-old/wireshark-old/epan/arcnet_pids.h"
    "/home/kali/wireshark-old/wireshark-old/epan/arptypes.h"
    "/home/kali/wireshark-old/wireshark-old/epan/asn1.h"
    "/home/kali/wireshark-old/wireshark-old/epan/ax25_pids.h"
    "/home/kali/wireshark-old/wireshark-old/epan/bridged_pids.h"
    "/home/kali/wireshark-old/wireshark-old/epan/capture_dissectors.h"
    "/home/kali/wireshark-old/wireshark-old/epan/charsets.h"
    "/home/kali/wireshark-old/wireshark-old/epan/chdlctypes.h"
    "/home/kali/wireshark-old/wireshark-old/epan/color_filters.h"
    "/home/kali/wireshark-old/wireshark-old/epan/column.h"
    "/home/kali/wireshark-old/wireshark-old/epan/column-info.h"
    "/home/kali/wireshark-old/wireshark-old/epan/column-utils.h"
    "/home/kali/wireshark-old/wireshark-old/epan/conversation.h"
    "/home/kali/wireshark-old/wireshark-old/epan/conversation_debug.h"
    "/home/kali/wireshark-old/wireshark-old/epan/conversation_table.h"
    "/home/kali/wireshark-old/wireshark-old/epan/conv_id.h"
    "/home/kali/wireshark-old/wireshark-old/epan/crc10-tvb.h"
    "/home/kali/wireshark-old/wireshark-old/epan/crc16-tvb.h"
    "/home/kali/wireshark-old/wireshark-old/epan/crc32-tvb.h"
    "/home/kali/wireshark-old/wireshark-old/epan/crc6-tvb.h"
    "/home/kali/wireshark-old/wireshark-old/epan/crc8-tvb.h"
    "/home/kali/wireshark-old/wireshark-old/epan/decode_as.h"
    "/home/kali/wireshark-old/wireshark-old/epan/diam_dict.h"
    "/home/kali/wireshark-old/wireshark-old/epan/disabled_protos.h"
    "/home/kali/wireshark-old/wireshark-old/epan/dissector_filters.h"
    "/home/kali/wireshark-old/wireshark-old/epan/dtd.h"
    "/home/kali/wireshark-old/wireshark-old/epan/dtd_parse.h"
    "/home/kali/wireshark-old/wireshark-old/epan/dvb_chartbl.h"
    "/home/kali/wireshark-old/wireshark-old/epan/eap.h"
    "/home/kali/wireshark-old/wireshark-old/epan/eapol_keydes_types.h"
    "/home/kali/wireshark-old/wireshark-old/epan/epan.h"
    "/home/kali/wireshark-old/wireshark-old/epan/epan_dissect.h"
    "/home/kali/wireshark-old/wireshark-old/epan/etypes.h"
    "/home/kali/wireshark-old/wireshark-old/epan/ex-opt.h"
    "/home/kali/wireshark-old/wireshark-old/epan/except.h"
    "/home/kali/wireshark-old/wireshark-old/epan/exceptions.h"
    "/home/kali/wireshark-old/wireshark-old/epan/expert.h"
    "/home/kali/wireshark-old/wireshark-old/epan/export_object.h"
    "/home/kali/wireshark-old/wireshark-old/epan/exported_pdu.h"
    "/home/kali/wireshark-old/wireshark-old/epan/filter_expressions.h"
    "/home/kali/wireshark-old/wireshark-old/epan/follow.h"
    "/home/kali/wireshark-old/wireshark-old/epan/frame_data.h"
    "/home/kali/wireshark-old/wireshark-old/epan/frame_data_sequence.h"
    "/home/kali/wireshark-old/wireshark-old/epan/funnel.h"
    "/home/kali/wireshark-old/wireshark-old/epan/garrayfix.h"
    "/home/kali/wireshark-old/wireshark-old/epan/golay.h"
    "/home/kali/wireshark-old/wireshark-old/epan/guid-utils.h"
    "/home/kali/wireshark-old/wireshark-old/epan/iana_charsets.h"
    "/home/kali/wireshark-old/wireshark-old/epan/iax2_codec_type.h"
    "/home/kali/wireshark-old/wireshark-old/epan/in_cksum.h"
    "/home/kali/wireshark-old/wireshark-old/epan/ip_opts.h"
    "/home/kali/wireshark-old/wireshark-old/epan/ipproto.h"
    "/home/kali/wireshark-old/wireshark-old/epan/ipv4.h"
    "/home/kali/wireshark-old/wireshark-old/epan/ipv6.h"
    "/home/kali/wireshark-old/wireshark-old/epan/lapd_sapi.h"
    "/home/kali/wireshark-old/wireshark-old/epan/llcsaps.h"
    "/home/kali/wireshark-old/wireshark-old/epan/maxmind_db.h"
    "/home/kali/wireshark-old/wireshark-old/epan/media_params.h"
    "/home/kali/wireshark-old/wireshark-old/epan/next_tvb.h"
    "/home/kali/wireshark-old/wireshark-old/epan/nlpid.h"
    "/home/kali/wireshark-old/wireshark-old/epan/oids.h"
    "/home/kali/wireshark-old/wireshark-old/epan/osi-utils.h"
    "/home/kali/wireshark-old/wireshark-old/epan/oui.h"
    "/home/kali/wireshark-old/wireshark-old/epan/packet.h"
    "/home/kali/wireshark-old/wireshark-old/epan/packet_info.h"
    "/home/kali/wireshark-old/wireshark-old/epan/params.h"
    "/home/kali/wireshark-old/wireshark-old/epan/plugin_if.h"
    "/home/kali/wireshark-old/wireshark-old/epan/ppptypes.h"
    "/home/kali/wireshark-old/wireshark-old/epan/print.h"
    "/home/kali/wireshark-old/wireshark-old/epan/print_stream.h"
    "/home/kali/wireshark-old/wireshark-old/epan/prefs.h"
    "/home/kali/wireshark-old/wireshark-old/epan/prefs-int.h"
    "/home/kali/wireshark-old/wireshark-old/epan/proto.h"
    "/home/kali/wireshark-old/wireshark-old/epan/proto_data.h"
    "/home/kali/wireshark-old/wireshark-old/epan/ps.h"
    "/home/kali/wireshark-old/wireshark-old/epan/ptvcursor.h"
    "/home/kali/wireshark-old/wireshark-old/epan/range.h"
    "/home/kali/wireshark-old/wireshark-old/epan/reassemble.h"
    "/home/kali/wireshark-old/wireshark-old/epan/reedsolomon.h"
    "/home/kali/wireshark-old/wireshark-old/epan/register.h"
    "/home/kali/wireshark-old/wireshark-old/epan/req_resp_hdrs.h"
    "/home/kali/wireshark-old/wireshark-old/epan/rtd_table.h"
    "/home/kali/wireshark-old/wireshark-old/epan/rtp_pt.h"
    "/home/kali/wireshark-old/wireshark-old/epan/sctpppids.h"
    "/home/kali/wireshark-old/wireshark-old/epan/secrets.h"
    "/home/kali/wireshark-old/wireshark-old/epan/show_exception.h"
    "/home/kali/wireshark-old/wireshark-old/epan/slow_protocol_subtypes.h"
    "/home/kali/wireshark-old/wireshark-old/epan/sminmpec.h"
    "/home/kali/wireshark-old/wireshark-old/epan/srt_table.h"
    "/home/kali/wireshark-old/wireshark-old/epan/stat_tap_ui.h"
    "/home/kali/wireshark-old/wireshark-old/epan/stat_groups.h"
    "/home/kali/wireshark-old/wireshark-old/epan/stats_tree.h"
    "/home/kali/wireshark-old/wireshark-old/epan/stats_tree_priv.h"
    "/home/kali/wireshark-old/wireshark-old/epan/stream.h"
    "/home/kali/wireshark-old/wireshark-old/epan/strutil.h"
    "/home/kali/wireshark-old/wireshark-old/epan/t35.h"
    "/home/kali/wireshark-old/wireshark-old/epan/tap.h"
    "/home/kali/wireshark-old/wireshark-old/epan/tap-voip.h"
    "/home/kali/wireshark-old/wireshark-old/epan/timestamp.h"
    "/home/kali/wireshark-old/wireshark-old/epan/timestats.h"
    "/home/kali/wireshark-old/wireshark-old/epan/tfs.h"
    "/home/kali/wireshark-old/wireshark-old/epan/time_fmt.h"
    "/home/kali/wireshark-old/wireshark-old/epan/to_str.h"
    "/home/kali/wireshark-old/wireshark-old/epan/tvbparse.h"
    "/home/kali/wireshark-old/wireshark-old/epan/tvbuff.h"
    "/home/kali/wireshark-old/wireshark-old/epan/tvbuff-int.h"
    "/home/kali/wireshark-old/wireshark-old/epan/uat.h"
    "/home/kali/wireshark-old/wireshark-old/epan/uat-int.h"
    "/home/kali/wireshark-old/wireshark-old/epan/unit_strings.h"
    "/home/kali/wireshark-old/wireshark-old/epan/value_string.h"
    "/home/kali/wireshark-old/wireshark-old/epan/x264_prt_id.h"
    "/home/kali/wireshark-old/wireshark-old/epan/xdlc.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/kali/wireshark-old/wireshark-old/epan/crypt/cmake_install.cmake")
  include("/home/kali/wireshark-old/wireshark-old/epan/dfilter/cmake_install.cmake")
  include("/home/kali/wireshark-old/wireshark-old/epan/dissectors/cmake_install.cmake")
  include("/home/kali/wireshark-old/wireshark-old/epan/ftypes/cmake_install.cmake")
  include("/home/kali/wireshark-old/wireshark-old/epan/wmem/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/kali/wireshark-old/wireshark-old/epan/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
