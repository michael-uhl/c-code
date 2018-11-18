#include <stdio.h>
#include <string.h>

int main(void) {
   printf("Size of 'Hello' is: '%lu'\n", sizeof("Hello"));	 
   
   char* helloPt = "Hello";
   printf("helloPtr='%s'\n", helloPt);
   printf("length of helloPtr is '%lu'\n", strlen(helloPt));

   char* p = "hello";
   char q[] = "hello"; // no need to count this

   printf("Size of 'p': %zu\n", sizeof(p)); // => size of pointer to char -- 4 on x86, 8 on x86-64
   printf("Size of 'q': %zu\n", sizeof(q)); // => size of char array in memory -- 6 on both

   // size_t strlen(const char *s) and we don't get any warnings here:
   printf("Length of 'p': %zu\n", strlen(p)); // => 5
   printf("Lenght of 'q': %zu\n", strlen(q)); // => 5

   return 0;
}
