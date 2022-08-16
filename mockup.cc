extern "C" {
#include "component_two.h"

int some_number(int x){return 0;};

}

class WrapC {
 public:    
  virtual int some_number(int x) = 0;
};

#include "gmock/gmock.h" 

class MockWrapC : public WrapC {
 public:
  MOCK_METHOD(int, some_number, (int x), (override));
};
