#include <assert.h>
#include "main.h"
void test1(void){
    assert(count(4,0.1,1) == 6);
}
void test2(void){
    assert(count(6,0.01,1)==10);
}
void test3(void){
    assert(count(10,0.00001,1)==18);
}
void test4(void){
    assert(countSecond(10,1)==10);
}
void test5(void){
    assert(countSecond(6,3)==36);
}
void test6(void){
    assert(factorial(3)==6);
}
void test7(void){
    assert(factorial(5)==120);
}
void test8(void){
    assert(countNew(4,0.1,1)==6);
}

#undef main
int main(void){
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
}