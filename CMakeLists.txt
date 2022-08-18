cmake_minimum_required(VERSION 3.14)
project(my_project)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

if (WIN32)
    # Prevent overriding the parent project's compiler/linker
    # settings on Windows
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
endif()

FetchContent_MakeAvailable(googletest)

include(GoogleTest)

find_package(Threads REQUIRED)

enable_testing()

macro(create_libary_with_tests NAME)
  add_library(
      ${NAME}
      OBJECT
      ${NAME}.c
    )

  add_executable(
      ${NAME}_test
      ${NAME}_test.cc
      ${NAME}_mocks.cc
  )
    
  target_link_libraries(
    ${NAME}_test
    ${NAME}
    GTest::gtest_main
    GTest::gmock_main
    Threads::Threads
  )

  gtest_discover_tests(${NAME}_test)
endmacro(create_libary_with_tests)


create_libary_with_tests(a)
create_libary_with_tests(b)
create_libary_with_tests(c)

add_executable(
  app
  main.c
)

target_link_libraries(
  app
  a
  b
  c
)
