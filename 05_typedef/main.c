#include "kunde.h"

#include <stdio.h>

int main(void) {
   kunde kd;
   kunde* kdPtr; 
   kdPtr = &kd;

   kdPtr->name = "Test";
   printf("%s\n", kdPtr->name);

   kunde* maier = createKunde("Hans Maier", "123");
	
   printf("%s\n", maier->name);
   return 0;
}

