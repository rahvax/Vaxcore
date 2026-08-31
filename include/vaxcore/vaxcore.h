/*
  VAXCORE LIB
  Vou começar usando apenas aqui,
  e depois vou separar em arquivos
  
  - Gabriel Caelestis
 */
#ifndef _VAXCORE_H
#define _VAXCORE_H

/* Enumerador temporario
   Os retornos padronizados
   para a função de mensagem */
enum vx_logTypes {
  Sucess,
  Warning,

  Error = -1
};

/* Exibir uma mensagem de log formatada
   A função vai usar variadico para formatar
   o buffer "message" */
void logMessage(const int enumType, const char *message, ...);

#endif
