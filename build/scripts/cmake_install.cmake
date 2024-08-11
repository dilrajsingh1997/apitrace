# Install script for directory: /home/dilraj/Documents/apitrace/scripts

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
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/apitrace/scripts" TYPE PROGRAM FILES
    "/home/dilraj/Documents/apitrace/scripts/convert.py"
    "/home/dilraj/Documents/apitrace/scripts/jsondiff.py"
    "/home/dilraj/Documents/apitrace/scripts/jsonextractimages.py"
    "/home/dilraj/Documents/apitrace/scripts/leaks.py"
    "/home/dilraj/Documents/apitrace/scripts/profileshader.py"
    "/home/dilraj/Documents/apitrace/scripts/retracediff.py"
    "/home/dilraj/Documents/apitrace/scripts/snapdiff.py"
    "/home/dilraj/Documents/apitrace/scripts/tracecheck.py"
    "/home/dilraj/Documents/apitrace/scripts/tracediff.py"
    "/home/dilraj/Documents/apitrace/scripts/unpickle.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/apitrace/scripts" TYPE FILE FILES
    "/home/dilraj/Documents/apitrace/scripts/apitrace.PIXExp"
    "/home/dilraj/Documents/apitrace/scripts/highlight.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/apitrace/scripts" TYPE FILE FILES "/home/dilraj/Documents/apitrace/scripts/apitrace.PIXExp")
endif()

