#include "../include/vaxcore/vaxcore.h"

int main(void) {
  logMessage(Warning, "criando um arquivo.");
  writeFile("arquivo.txt", "Hello, World!\n");
  return Sucess;
}
