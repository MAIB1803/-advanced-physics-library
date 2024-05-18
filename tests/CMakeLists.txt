include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.10.0.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(AllTests main.cpp)
target_link_libraries(AllTests AdvancedPhysicsLib gtest gtest_main)
add_test(NAME AllTests COMMAND AllTests)
