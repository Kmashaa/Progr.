#include <assert.h>
#include <stdio.h>
#include "main.h"
void test1(void){
    assert(count(5) == 3);
}
void test2(void){
    assert(count(1)==1);
}
void test3(void){
    assert(count(0)==0);
}
void test4(void){
    assert(countAny(5,1) == 8);
}
void test5(void){
    assert(countAny(4,2)==2);
}
void test6(void){
    assert(countAny(4,3)==1);
}


int main(void){
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    return 0;
}
