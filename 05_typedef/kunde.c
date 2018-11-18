#include "kunde.h"

#include <stdio.h>
#include <stdlib.h>

kunde* createKunde(char* name, char* konto) {
  printf("size=%lu\n", sizeof(kunde));
  kunde* returnValue = (kunde*)malloc(sizeof(kunde));
  returnValue->name = name;
  returnValue->kontonummer = konto;

  return returnValue;
}



