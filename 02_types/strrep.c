#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   char* input = "Hallo, wie geht's";
   char* filter = "lg";
   
   char* inp = (char*)malloc(strlen(input) + 1);
   strcpy(inp, input);
   
   printf("%s\n", inp);
   for (int i = 0; i < strlen(filter); i++) {
       char curFilterChar = (char)*(filter + i);
       
       for (int j = 0; j < strlen(inp); j++) {
           char curChar =  (char)*(inp + j);
           
           
           if (curChar == curFilterChar) {
               int k = j;
               for (; k < strlen(input); k++) {
                   inp[k] = inp[k+1];
               }
               
               j--;
           }
       }
   }
   
   printf("%s\n", inp);
}
