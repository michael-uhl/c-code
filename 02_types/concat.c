#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concat(char** s, char* t) {
    char* ret = (char*) malloc(strlen(*s) + strlen(t) + 1);

    for (int i = 0; i < strlen(*s); i++) {
        *(ret + i) = *(*s + i);
    }

    s = 0;
    
    for (int i = 0; i < strlen(t); i++) {
        *(ret + strlen(*s) + i) = *(t + i);
    }

    *s = ret;
}


int main() {
   char* first = "First";
   char* second = "Second";
   
   printf("%s\n", first);
   
   concat(&first, second);
   
   printf("%s\n", first);
}
