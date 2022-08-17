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
};

extern class_b_mocks b_mocks;

#endif /* b_mocks_h */
