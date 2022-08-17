/** This file needs to be generated by HAMMOCK */
#ifndef c_mocks_h
#define c_mocks_h

#include "gmock/gmock.h" 

/** Include the necessary header files (needed for types, constants, etc.) */
extern "C" {
} /* extern "C" */

/** One abstract class. For each undefined function create a virtual function within this class */
class class_c {
 public:    
};


/** One Mockup class. For each undefined function create the resp. MOCK_METHOD line */
class class_c_mocks : public class_c {
 public:
};

extern class_c_mocks c_mocks;

#endif /* c_mocks_h */
