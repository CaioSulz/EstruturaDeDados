#include <stdio.h>
#include <stdlib.h> 

typedef struct no {
   int chave;
   struct no *esq, *dir;
} no;

no *maximo(no *r) {
  if (r == NULL) {
    return NULL;
  }

  if (r->dir == NULL) {
    return r;
  }

  return maximo(r->dir);
}


