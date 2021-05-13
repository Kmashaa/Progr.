#include <stdio.h>
#include <stdlib.h>

typedef struct elem {
    int digit;
    struct elem* prev;
    struct elem* next;
} node;

typedef struct list {
    node* head;
    node* tail;
    unsigned int size;
} number;

number* createNumber(const char* value, int size);
char* toString(number* num);
void multiply(number* num, const int multiplier);
void deleteNumber(number* num);
void addNode(number* num, int new_digit);
void power(int base, unsigned int power, number* num);