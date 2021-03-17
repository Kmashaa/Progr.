#include <assert.h>
#include <stdio.h>
#include "main.h"

void test1(void){
    assert(count(5) == 3);
    assert(count(1) == 1);
    assert(count(0) == 0);
    printf("Count tests passed successfully");
}

void test2(void){
    assert(countAny(5, 1) == 8);
    assert(countAny(4, 2) == 2);
    assert(countAny(4, 3) == 1);
    printf("CountAny tests passed successfully");
}

#undef main

int main(void){
    test1();
    test2();
    printf("All tests passed successfully");
    return 0;
}
