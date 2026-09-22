#include "../include/vaxcore/vaxcore.h"
#include <stdio.h>
#include <stdarg.h> // Responsável pelos argumentos
                    // variadicos
void logMessage(const int enumType, const char *message, ...){
  va_list args;

  switch (enumType) {
    case Sucess:
      printf("[+]: ");
      break;
    case Warning:
      printf("[!]: ");
      break;
    case Error:
      printf("[X]: ");
      break;
    case Debug:
      printf("[@]: ");
      break;
    default:
      printf("[Log]: ");
  }
  
  va_start(args, message);
  vprintf(message, args);
  va_end(args);

  putchar('\n');
}

int checkFile(const char *filepath) {
  FILE *fp;
  if (!(fp = fopen(filepath, "r"))) {
    logMessage(Error, "arquivo %s não encontrado", filepath);
    return -1;
  }
  logMessage(Sucess, "arquivo %s encontrado", filepath);
  fclose(fp);
  return 0;
}

int registerFile (const char *filepath, const char *buffer) {
  FILE *fp;
  if (!(fp = fopen(filepath, "a"))) {
    logMessage(Error, "não foi possível criar ou escrever no arquivo.");
    return Error;
  }

  fprintf(fp, "[LOG]: %s\n", buffer);
  fclose(fp);
  return Sucess;
}

int writeFile(const char *filepath, const char *buffer) {
  FILE *fp;
  if (!(fp = fopen(filepath, "w"))) {
    logMessage(Error, "não foi possível criar ou escrever no arquivo.");
    return Error;
  }

  fputs(buffer, fp);
  fclose(fp);
  return Sucess;
}

long sizeFile(const char *filepath) {
  FILE *fp;
  long int size;
  
  if (!(fp = fopen(filepath, "r"))) {
    logMessage(Error, "erro na leitura do arquivo");
    return Error;
  }

  if (fseek(fp, 0L, SEEK_END) != 0) {
    logMessage(Error, "não foi possível localizar a posição final");
    return Error;
  }

  if (!(size = ftell(fp))) {
    logMessage(Error, "não foi possível capturar a posição");
    return Error;
  }

  return size;
}
