class WrapC {
 public:    
  virtual int some_number(int x) = 0;
};

#include "gmock/gmock.h" 

class MockWrapC : public WrapC {
 public:
  MOCK_METHOD(int, some_number, (int x), (override));
};


MockWrapC wrapc;

extern "C" {
#include "component_two.h"
} /* extern "C" */

int some_number(int x){
    return wrapc.some_number(x);
}


