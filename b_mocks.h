/** This file needs to be generated by HAMMOCK */
#ifndef b_mocks_h
#define b_mocks_h

#include "gmock/gmock.h" 

/** Include the necessary header files (needed for types, constants, etc.) */
extern "C" {
#include "a.h"
#include "c.h"
} /* extern "C" */

/** One Mockup class. For each undefined function create the resp. MOCK_METHOD line */

class class_b_mocks {

 public:
  MOCK_METHOD((int), a_get_y2, ());
  MOCK_METHOD((void), c_set_u2, (int));
  MOCK_METHOD((int), a_get_y3_and_set_u5, (int));
  MOCK_METHOD((void), c_set_u3_and_u4, (int, int));
  MOCK_METHOD((a_y5_t), a_get_y5, ());
  MOCK_METHOD((int), c_get_y3_and_set_u5, (int));
  MOCK_METHOD((void), a_get_y6, (int*));
  MOCK_METHOD((void), c_set_u6, (c_u6_t));
};

extern class_b_mocks *b_mocks_global_ptr;

#define CREATE_MOCK(name)   class_b_mocks name; b_mocks_global_ptr = &name;

#endif /* b_mocks_h */

