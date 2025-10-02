find_package(GTest REQUIRED)

add_executable(
    tests
    test_functions.cpp
    ../functions.cpp
)

target_link_libraries(
    tests
    GTest::gtest
    GTest::gtest_main
    pthread
)

include(GoogleTest)
gtest_discover_tests(tests)