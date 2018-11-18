#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

int main()
{
   bool tr = true;
   bool fl = false;
   
   if (tr) {
      printf("True works!\n");
   }

   if(!fl) {
      printf("False works!\n");
   }

   return 0;
}
