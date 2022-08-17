/** This file needs to be generated by HAMMOCK */
#ifndef a_mocks_h
#define a_mocks_h

#include "gmock/gmock.h" 

/** Include the necessary header files (needed for types, constants, etc.) */
extern "C" {
} /* extern "C" */

/** One abstract class. For each undefined function create a virtual function within this class */
class class_a {
 public:    
};


/** One Mockup class. For each undefined function create the resp. MOCK_METHOD line */
class class_a_mocks : public class_a {
 public:
};

extern class_a_mocks a_mocks;

#endif /* a_mocks_h */
