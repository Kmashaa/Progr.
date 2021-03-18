#include <assert.h>
#include "main.h"
void test1(void){
    assert(perimetr(1,2,3) == 6);
}
void test2(void){
    assert(perimetr(0,0,0)==0);
}
void test3(void){
    assert(area(12,3,4,5)==6);
}
void test4(void){
    assert(area(30,5,12,13) == 30);
}
void test5(void){
    assert(rad(30,30)==2);
}
void test6(void){
    assert(rad(6,12)==1);
}
void test7(void){
    assert(Rad(5,12,13,30)==6.5);
}
void test8(void){
    assert(Rad(3,4,5,6)==2.5);
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
