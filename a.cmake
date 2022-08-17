
add_library(
    a
    OBJECT
    a.c
  )
  
  add_executable(
    a_test
    a_test.cc
    a_mocks.cc
  )
  
  target_link_libraries(
    a_test
    a
    GTest::gtest_main
    GTest::gmock_main
    Threads::Threads
  )
  
  gtest_discover_tests(a_test)
