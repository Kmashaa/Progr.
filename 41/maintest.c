#include <assert.h>
#include <stdio.h>
#include "main.h"

void test1(void){
    assert(check('.','a',' ') == 1);
    assert(check(' ','a','a') == 0);
    assert(check('.','a','a') == 1);
    printf("Checking tests passed successfully.\n");
}

#undef main

int main(void){
    char ts;
    test1();

    printf("\nAll tests passed successfully.");
    return 0;
}