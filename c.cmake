
add_library(
    c
    OBJECT
    c.c
  )
  
  add_executable(
    c_test
    c_test.cc
    c_mocks.cc
  )
  
  target_link_libraries(
    c_test
    c
    GTest::gtest_main
    GTest::gmock_main
    Threads::Threads
  )
  
  gtest_discover_tests(c_test)
