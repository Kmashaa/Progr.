#include <assert.h>
#include <stdio.h>
#include "main.h"

void test1(void){
    assert(arith(25,5) == 5);
    assert(arith(10,2) == 5);
    assert(arith(60,10) == 6);
    printf("Count tests passed successfully.\n");
}

#undef main

int main(void){
    test1();
    printf("\nAll tests passed successfully.");
    return 0;
}