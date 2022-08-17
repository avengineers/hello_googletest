
add_library(
    b
    OBJECT
    b.c
  )
  
  add_executable(
    b_test
    b_test.cc
    b_mocks.cc
  )
  
  target_link_libraries(
    b_test
    b
    GTest::gtest_main
    GTest::gmock_main
    Threads::Threads
  )
  
  gtest_discover_tests(b_test)
