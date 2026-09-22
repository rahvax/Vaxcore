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
  Debug,

  Error = -1
};

/* Exibir uma mensagem de log formatada
   A função vai usar variadico para formatar
   o buffer "message" */
void logMessage(const int enumType, const char *message, ...);
/* Verificar se um arquivo existe
   Vai retornar 0 para sucesso e
   -1 para erros */
int checkFile(const char *filepath);
/* Registrar uma string dentro de um arquivo
   Retorna 0 para sucesso e -1 para erros */
int registerFile (const char *filepath, const char *buffer);
/* Criar e/ou escrever dentro de um arquivo
   Retorna 0 para sucesso e -1 para erros */
int writeFile(const char *filepath, const char *buffer);
/* Retornar o "tamanho" de um arquivo
   Retorna -1 para erros */
long sizeFile(const char *filepath);
#endif
