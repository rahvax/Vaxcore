#include "../include/vaxcore/vaxcore.h"
#define FILEPATH "arquivo.txt"

int main(void) {
  long int size;
  logMessage(Warning, "criando arquivo e testando");
  writeFile(FILEPATH, "Hello, World!");
  size = sizeFile(FILEPATH);
  logMessage(Debug, "tamanho do %s é %li chars", FILEPATH, size);
  return Sucess;
}
