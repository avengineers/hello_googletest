#include "c.h"

int c_u1;
int c_y1;

static int c_u2;
void c_set_u2(int u2){
    c_u2 = u2;
}

static int c_y2;
int c_get_y2(void){
    return c_y2;
}

static int c_u3, c_u4;
void c_set_u3_and_u4(int u3, int u4){
    c_u3 = u3;
    c_u4 = u4;
}

static int c_y3, c_u5;
int c_get_y3_and_set_u5(int u5){
    c_u5 = u5;
    return c_y3;
}

c_y4_t c_y4;

static c_u6_t c_u6;
void c_set_u6(c_u6_t u6){
    c_u6 = u6;
}

static c_y5_t c_y5;
c_y5_t c_get_y5(void){
    return c_y5;
}

static int c_y6;
void c_get_y6(int *y6){
    *y6 = c_y6;
}



void c_init(void){
    c_u1 = 0;
    c_u2 = 0;
    c_u3 = 0;
    c_u4 = 0;
    c_u5 = 0;
    c_u6 = 0;

    c_y1 = 0;
    c_y2 = 0;
    c_y3 = 0;
    c_y4 = 0;
    c_y5 = 0;
    c_y6 = 0;
}

void c_step(void){
    c_y1 = c_u1;
    c_y2 = c_u2;
    c_y3 = c_u3;
    c_y4 = c_u4;
    c_y5 = c_u5;
    c_y6 = c_u6;
}
