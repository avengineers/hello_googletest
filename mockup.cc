/** This file needs to be generated by HAMMOCK */


extern "C" {
/** Include the necessary header files (needed for types, constants, etc.) */
#include "component_two.h"
} /* extern "C" */

/** One abstract class. For each undefined function create a virtual function within this class */
class WrapC {
 public:    
  virtual int some_number(int x) = 0;
};

#include "gmock/gmock.h" 

/** One Mockup class. For each undefined function create the resp. MOCK_METHOD line */
class MockWrapC : public WrapC {
 public:
  MOCK_METHOD(int, some_number, (int x), (override));
};


/** Create an object */
MockWrapC wrapc;


/** Foreach undefined function create the glue between c-function and the object method. */

int some_number(int x){
    return wrapc.some_number(x);
}


