#ifndef KUNDE_H
#define KUNDE_H

typedef struct 
{
  char* name;
  char* kontonummer;
} kunde;

kunde* createKunde(char* name, char* konto);

#endif
