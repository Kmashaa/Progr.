#include "main.h"
#include <assert.h>
#include <string.h>

void test(const int pow, const char* result);
#undef main

int main() {
    test(100, "515377520732011331036461129765621272702107522001");
    test(110, "30432527221704537086371993251530170531786747066637049");
    test(120, "1797010299914431210413179829509605039731475627537851106401");
    printf("!!!");
    return 0;
}

void test(const int pow, const char* result) {
    number* num = createNumber("3", 1);
    power(3, pow, num);
    
    assert(strlen(toString(num))== strlen(result));
    deleteNumber(num);
}