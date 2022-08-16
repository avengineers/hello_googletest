#include "hello.h"
#include "component_two.h"

int get_one(){return 1;}

int get_two(){
    int one = 1;
    return some_number(one);
}
