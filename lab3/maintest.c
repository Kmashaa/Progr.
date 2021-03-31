#include <assert.h>
#include <stdio.h>
#include "main.h"

void test1(void){
    assert(countMatrixSide(25) == 5);
    assert(countMatrixSide(0) == 0);
    assert(countMatrixSide(37) == 7);
    printf("Count tests passed successfully.\n");
}

#undef main

int main(void){
    test1();
    printf("\nAll tests passed successfully.");
    return 0;
}