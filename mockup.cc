/** This file needs to be generated by HAMMOCK */
#include "mockup.h"

/** Create an object */
MockWrapC wrapc;

/** Foreach undefined function create the glue between c-function and the object method. */

int some_number(int x){
    return wrapc.some_number(x);
}
