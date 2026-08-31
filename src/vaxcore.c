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
    default:
      printf("[Log]: ");
  }
  
  printf("[Teste]: ");
  va_start(args, message);
  vprintf(message, args);
  va_end(args);

  putchar('\n');
}
