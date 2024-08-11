# CMake generated Testfile for 
# Source directory: /home/dilraj/Documents/apitrace/thirdparty
# Build directory: /home/dilraj/Documents/apitrace/build/thirdparty
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(libbacktrace_btest "/usr/bin/python3.10" "/home/dilraj/Documents/apitrace/thirdparty/support/libbacktrace/closefds.py" "/home/dilraj/Documents/apitrace/build/btest")
set_tests_properties(libbacktrace_btest PROPERTIES  _BACKTRACE_TRIPLES "/home/dilraj/Documents/apitrace/thirdparty/libbacktrace.cmake;166;add_test;/home/dilraj/Documents/apitrace/thirdparty/libbacktrace.cmake;0;;/home/dilraj/Documents/apitrace/thirdparty/CMakeLists.txt;16;include;/home/dilraj/Documents/apitrace/thirdparty/CMakeLists.txt;59;include_with_scope;/home/dilraj/Documents/apitrace/thirdparty/CMakeLists.txt;0;")
add_test(libbacktrace_stest "/home/dilraj/Documents/apitrace/build/stest")
set_tests_properties(libbacktrace_stest PROPERTIES  _BACKTRACE_TRIPLES "/home/dilraj/Documents/apitrace/thirdparty/libbacktrace.cmake;181;add_test;/home/dilraj/Documents/apitrace/thirdparty/libbacktrace.cmake;0;;/home/dilraj/Documents/apitrace/thirdparty/CMakeLists.txt;16;include;/home/dilraj/Documents/apitrace/thirdparty/CMakeLists.txt;59;include_with_scope;/home/dilraj/Documents/apitrace/thirdparty/CMakeLists.txt;0;")
subdirs("crc32c")
subdirs("md5")
