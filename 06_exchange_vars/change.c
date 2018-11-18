#include <stdio.h>

#include "change.h"

int main() {
  int a = 3;
  int b = 5;

  printf("&a=%i, &b=%i\n", &a, &b);
  printf("a=%i, b=%i\n", a, b);

  exchange(&a, &b);

  printf("&a=%i, &b=%i\n", &a, &b);
  printf("a=%i, b=%i\n", a, b);

  return 0;
}

void exchange(int* a, int* b) {
  int h = *a;
  *a = *b;
  *b = h;
}

