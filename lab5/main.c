#include "main.h"

int main() {
    number* num = createNumber("3", 1);
    unsigned int p;
    scanf("%d",p);
    power(3, p, num);
    printf("%d",num);
    deleteNumber(num);
    return 0;
}

number* createNumber(const char* value, const int number_size) {
    number* num = (number*)malloc(sizeof(number));
    if (num == NULL) {
        printf("Error\n");
        exit(0);
    }
    num->size = 0;
    num->head = num->tail = (node*)malloc(sizeof(node));
    if (num->head == NULL) {
        printf("Error");
        exit(0);
    }
    num->tail->prev = num->tail->next = NULL;
    num->tail->digit = value[number_size - 1] - '0';
    for (int i = 0; i < number_size - 1; i++) {
        addNode(num, (int)value[number_size - 1 - i] - '0');
    }
    return num;
}

void multiply(number* num, const int multiplier) {
    node* current = num->tail;
    int extra = 0;
    while (current != NULL) {
        int digit = current->digit;
        current->digit = (digit * multiplier + extra) % 10;
        extra = (digit * multiplier + extra) / 10;
        if (extra != 0 && current->prev == NULL) {
            addNode(num, extra);
            return;
        }
        current = current->prev;
    }
}

char* toString(number* num) {
    char* result = (char*)malloc(num->size * sizeof(char) + 1);
    if (result == NULL) {
        printf("Error\n");
        exit(0);
    }
    node* current = num->head;
    int count = 0;
    while (current != NULL) {
        result[count] = (char)current->digit + '0';
        current = current->next;
        count++;
    }
    result[count] = '\0';
    return result;
}

void deleteNumber(number* num) {
    node* current = num->head;
    while (current->next != NULL) {
        current = current->next;
        free(current->prev);
    }
    free(current);
    free(num);
}

void addNode(number* num, int new_digit) {
    node* new_node = (node*)malloc(sizeof(node));
    if (new_node == NULL) {
        printf("Error");
        exit(0);
    }
    new_node->prev = NULL;
    new_node->digit = new_digit;
    new_node->next = num->head;
    num->head->prev = new_node;
    num->head = num->head->prev;
    num->size++;
}

void power(int base, unsigned int power, number* num) {
    for (int i = 1; i < power; i++) {
        multiply(num, base);
    }
}