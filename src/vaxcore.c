#include "../include/vaxcore/vaxcore.h"
#include <stdio.h>
#include <stdarg.h> // Responsável pelos argumentos
                    // variadicos

void logMessage(const char *message, ...) {
  va_list args;

  printf("[Teste]: ");
  va_start(args, message);
  vprintf(message, args);
  va_end(args);

  putchar('\n');
}
