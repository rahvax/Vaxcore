#include "../include/vaxcore/vaxcore.h"
#include <stdio.h>

int main(void) {
  char buffer[] = "Mundo";
  logMessage(Sucess, "Olá, %s!", buffer);
  
  if (checkFile("maakefile") == -1) {
    printf("F\n");
    return Error;
  }
  
  return Sucess;
}
