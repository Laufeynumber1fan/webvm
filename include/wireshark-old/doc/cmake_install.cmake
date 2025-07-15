# Install script for directory: /home/kali/wireshark-old/wireshark-old/doc

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES
    "/home/kali/wireshark-old/wireshark-old/doc/androiddump.1"
    "/home/kali/wireshark-old/wireshark-old/doc/capinfos.1"
    "/home/kali/wireshark-old/wireshark-old/doc/captype.1"
    "/home/kali/wireshark-old/wireshark-old/doc/ciscodump.1"
    "/home/kali/wireshark-old/wireshark-old/doc/ciscodump.1"
    "/home/kali/wireshark-old/wireshark-old/doc/dftest.1"
    "/home/kali/wireshark-old/wireshark-old/doc/dumpcap.1"
    "/home/kali/wireshark-old/wireshark-old/doc/editcap.1"
    "/home/kali/wireshark-old/wireshark-old/doc/mergecap.1"
    "/home/kali/wireshark-old/wireshark-old/doc/randpkt.1"
    "/home/kali/wireshark-old/wireshark-old/doc/randpktdump.1"
    "/home/kali/wireshark-old/wireshark-old/doc/rawshark.1"
    "/home/kali/wireshark-old/wireshark-old/doc/reordercap.1"
    "/home/kali/wireshark-old/wireshark-old/doc/sshdump.1"
    "/home/kali/wireshark-old/wireshark-old/doc/text2pcap.1"
    "/home/kali/wireshark-old/wireshark-old/doc/tshark.1"
    "/home/kali/wireshark-old/wireshark-old/doc/udpdump.1"
    "/home/kali/wireshark-old/wireshark-old/doc/wireshark.1"
    "/home/kali/wireshark-old/wireshark-old/doc/sdjournal.1"
    "/home/kali/wireshark-old/wireshark-old/doc/mmdbresolve.1"
    "/home/kali/wireshark-old/wireshark-old/doc/sdjournal.html"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man4" TYPE FILE FILES
    "/home/kali/wireshark-old/wireshark-old/doc/extcap.4"
    "/home/kali/wireshark-old/wireshark-old/doc/wireshark-filter.4"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/wireshark" TYPE FILE FILES
    "/home/kali/wireshark-old/wireshark-old/doc/androiddump.html"
    "/home/kali/wireshark-old/wireshark-old/doc/capinfos.html"
    "/home/kali/wireshark-old/wireshark-old/doc/captype.html"
    "/home/kali/wireshark-old/wireshark-old/doc/ciscodump.html"
    "/home/kali/wireshark-old/wireshark-old/doc/ciscodump.html"
    "/home/kali/wireshark-old/wireshark-old/doc/dftest.html"
    "/home/kali/wireshark-old/wireshark-old/doc/dumpcap.html"
    "/home/kali/wireshark-old/wireshark-old/doc/editcap.html"
    "/home/kali/wireshark-old/wireshark-old/doc/extcap.html"
    "/home/kali/wireshark-old/wireshark-old/doc/mergecap.html"
    "/home/kali/wireshark-old/wireshark-old/doc/randpkt.html"
    "/home/kali/wireshark-old/wireshark-old/doc/randpktdump.html"
    "/home/kali/wireshark-old/wireshark-old/doc/rawshark.html"
    "/home/kali/wireshark-old/wireshark-old/doc/reordercap.html"
    "/home/kali/wireshark-old/wireshark-old/doc/sshdump.html"
    "/home/kali/wireshark-old/wireshark-old/doc/text2pcap.html"
    "/home/kali/wireshark-old/wireshark-old/doc/tshark.html"
    "/home/kali/wireshark-old/wireshark-old/doc/udpdump.html"
    "/home/kali/wireshark-old/wireshark-old/doc/wireshark-filter.html"
    "/home/kali/wireshark-old/wireshark-old/doc/wireshark.html"
    "/home/kali/wireshark-old/wireshark-old/doc/mmdbresolve.html"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/kali/wireshark-old/wireshark-old/doc/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
