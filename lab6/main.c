#include "tree.h"
#include <stdio.h>
int main(){
   char buffer[128];
   Item *root = NULL;
 
   FILE *fp = fopen("ex52.txt", "r");
   if (!fp){ 
      exit(1); 
   }
   while (fgets(buffer, 128, fp) != NULL){
      AddNode(atoi(buffer), &root); 
   }
   LeftOrder(root);
   fclose(fp);
   printf("\n");

   root = NULL;
   fp = fopen("ex52.txt", "r");
   if (!fp) {
      exit(1);
   } 
   while (fgets(buffer, 128, fp) != NULL){
      AddNodeNew(atoi(buffer), &root);
   } 
   LeftOrder(root);
   fclose(fp);
   return 0;
}