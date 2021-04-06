#include <stdio.h>
#include<stdlib.h>


int main(){
    int str[100];
    int x=0,i=0,k=0;
    int s=0;
    FILE* f=fopen("input.txt","r");
     if (f == NULL)
    {
        printf("Error occured");
        return 1;
    }
   while (fscanf(f,"%d",&str[i])!=EOF) {
       if(str[i]>0){
            x+=str[i];
            k++;
       }
        i++;
    }
    s=arith(x,k);
    printf("%d",s);
    return 0;
}
int arith(int x, int k){
    int s;
    s=x/k;
    return s;
}