#include "a.h"

int a_u1;
int a_y1;

static int a_u2;
void a_set_u2(int u2){
    a_u2 = u2;
}

static int a_y2;
int a_get_y2(void){
    return a_y2;
}

static int a_u3, a_u4;
void a_set_u3_and_u4(int u3, int u4){
    a_u3 = u3;
    a_u4 = u4;
}

static int a_y3, a_u5;
int a_get_y3_and_set_u5(int u5){
    a_u5 = u5;
    return a_y3;
}

a_y4_t a_y4;

static a_u6_t a_u6;
void a_set_u6(a_u6_t u6){
    a_u6 = u6;
}

static a_y5_t a_y5;
a_y5_t a_get_y5(void){
    return a_y5;
}

static int a_y6;
void a_get_y6(int *y6){
    *y6 = a_y6;
}



void a_init(void){
    a_u1 = 0;
    a_u2 = 0;
    a_u3 = 0;
    a_u4 = 0;
    a_u5 = 0;
    a_u6 = 0;

    a_y1 = 0;
    a_y2 = 0;
    a_y3 = 0;
    a_y4 = 0;
    a_y5 = 0;
    a_y6 = 0;
}

void a_step(void){
    a_y1 = a_u1;
    a_y2 = a_u2;
    a_y3 = a_u3;
    a_y4 = a_u4;
    a_y5 = a_u5;
    a_y6 = a_u6;
}
