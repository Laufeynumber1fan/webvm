# Install script for directory: /home/kali/wireshark-old/wireshark-old/epan/wmem

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/wireshark/epan/wmem" TYPE FILE FILES
    "/home/kali/wireshark-old/wireshark-old/epan/wmem/wmem.h"
    "/home/kali/wireshark-old/wireshark-old/epan/wmem/wmem_array.h"
    "/home/kali/wireshark-old/wireshark-old/epan/wmem/wmem_core.h"
    "/home/kali/wireshark-old/wireshark-old/epan/wmem/wmem_list.h"
    "/home/kali/wireshark-old/wireshark-old/epan/wmem/wmem_map.h"
    "/home/kali/wireshark-old/wireshark-old/epan/wmem/wmem_miscutl.h"
    "/home/kali/wireshark-old/wireshark-old/epan/wmem/wmem_queue.h"
    "/home/kali/wireshark-old/wireshark-old/epan/wmem/wmem_scopes.h"
    "/home/kali/wireshark-old/wireshark-old/epan/wmem/wmem_stack.h"
    "/home/kali/wireshark-old/wireshark-old/epan/wmem/wmem_strbuf.h"
    "/home/kali/wireshark-old/wireshark-old/epan/wmem/wmem_strutl.h"
    "/home/kali/wireshark-old/wireshark-old/epan/wmem/wmem_tree.h"
    "/home/kali/wireshark-old/wireshark-old/epan/wmem/wmem_interval_tree.h"
    "/home/kali/wireshark-old/wireshark-old/epan/wmem/wmem_user_cb.h"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/kali/wireshark-old/wireshark-old/epan/wmem/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
