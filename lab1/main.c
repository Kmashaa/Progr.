#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "main.h"
#ifndef TEST
int main(void)
{
    long num=0, counter, i;
    printf("Enter the number");
    scanf("%d",&num);
    counter=count(num);

    int digit;
    int number10 = 0;
    if(counter==0){
        printf("No such numbers");
    } else 
    {
        for (int j = counter; j > 0; j--) 
        {
            for (int i = 0; i < counter; i++) 
            {
                int any=countAny(counter,i);
                number10 +=  any;
                
            }
            if(number10<=num)
            {   for (int i = 0; i < counter; i++) 
                {
                     printf("1");
                }
                printf("-%d     ", number10); 
            }
        
        counter--;
        number10 = 0;   
        }
    }
    getchar();
    return 0;
}
#endif
int count(int num){
    int counter=0;
     while (num > 0) {
        num /= 2;
        counter++;
    }
    return counter;
}

int countAny(int counter, int i){
    int any=1;
    while (counter - i - 1) {
                any *= 2;
                counter--;
            }
    return any;
}
