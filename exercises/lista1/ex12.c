#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
  int dado;
  struct celula *prox;
} celula;

int remove_depois(celula *p){

if(p==NULL || p->prox == NULL){
  return 0;
}
  celula *lixo;
  lixo = p->prox;
  p->prox = lixo->prox;
  free(lixo);
  return 1;
}

void remove_elemento (celula *le, int x){
  celula *p, *q;
  p = le;
  q = le->prox;

  while(q!= NULL && q->dado != x){
    p = q;
    q = q->prox;
  }
  if (q!=NULL){
    p->prox = q->prox;
    free(q);
  }
}

void remove_todos_elementos (celula *le, int x){
  celula *p = NULL;
  celula *q = le;

  while(q != NULL){
    if( q->dado == x){
      if(p == NULL){
        le = q->prox;
        free(q);
        q = le;
      } else {
        p->prox = q->prox;
        celula *temp = q;
        q = q->prox;
        free(temp);
      }
    } else{
      p = q;
      q = q->prox;
    }
  }

}
