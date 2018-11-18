#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("Char min value as number:%i\n", CHAR_MIN);
    printf("Char max value as number:%i\n", CHAR_MAX);
    printf("Char min value as char  :'%c'\n", CHAR_MIN);
    printf("Char max value as char  :'%c'\n", CHAR_MAX);
    
    char a = 'a';
    char b = 98;
    printf("Char 'a' as number      :%i\n", a);
    printf("Char b as character     :%c\n", b);
    return 0;
}
