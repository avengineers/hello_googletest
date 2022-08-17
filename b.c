#include "b.h"

#include "a.h"
#include "c.h"

void b_init(void){
}

void b_step(void){
    int b1;
    b1 = a_y1;
    c_u1 = b1;

    int b2;
    b2 = a_get_y2();
    c_set_u2(b2);

    int b3;
    b3 = a_get_y3_and_set_u5(0);
    c_set_u3_and_u4(b3, 0);
}
