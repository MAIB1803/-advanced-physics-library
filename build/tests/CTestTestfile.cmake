# CMake generated Testfile for 
# Source directory: C:/Users/VIPUSTI/Desktop/advanced_physics_lib/tests
# Build directory: C:/Users/VIPUSTI/Desktop/advanced_physics_lib/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(AllTests "C:/Users/VIPUSTI/Desktop/advanced_physics_lib/build/tests/Debug/AllTests.exe")
  set_tests_properties(AllTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/VIPUSTI/Desktop/advanced_physics_lib/tests/CMakeLists.txt;12;add_test;C:/Users/VIPUSTI/Desktop/advanced_physics_lib/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(AllTests "C:/Users/VIPUSTI/Desktop/advanced_physics_lib/build/tests/Release/AllTests.exe")
  set_tests_properties(AllTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/VIPUSTI/Desktop/advanced_physics_lib/tests/CMakeLists.txt;12;add_test;C:/Users/VIPUSTI/Desktop/advanced_physics_lib/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(AllTests "C:/Users/VIPUSTI/Desktop/advanced_physics_lib/build/tests/MinSizeRel/AllTests.exe")
  set_tests_properties(AllTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/VIPUSTI/Desktop/advanced_physics_lib/tests/CMakeLists.txt;12;add_test;C:/Users/VIPUSTI/Desktop/advanced_physics_lib/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(AllTests "C:/Users/VIPUSTI/Desktop/advanced_physics_lib/build/tests/RelWithDebInfo/AllTests.exe")
  set_tests_properties(AllTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/VIPUSTI/Desktop/advanced_physics_lib/tests/CMakeLists.txt;12;add_test;C:/Users/VIPUSTI/Desktop/advanced_physics_lib/tests/CMakeLists.txt;0;")
else()
  add_test(AllTests NOT_AVAILABLE)
endif()
subdirs("../_deps/googletest-build")
