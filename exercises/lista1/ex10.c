#include <stdio.h>


typedef struct celula{
  int dado;
  struct celula *prox; 
} celula;

void imprime (celula *le) {
  celula *p;
  p = le->prox;
  if(p != NULL){
    for (p; p != NULL; p = p->prox){
      printf ("%d -> ", p->dado);
    }
  } 
  printf("NULL\n");
}
void imprime_rec (celula *le){
  celula *p;
  p = le->prox;
  if(p != NULL){
    printf("%d -> ", p->dado);
    imprime_rec(p);
  } else{
    printf("NULL\n");
  }
}




void insere_antes(celula *le, int x, int y) {
  celula *nova, *p, *q;

  nova = malloc(sizeof(celula));
  nova->dado = x;
  p = le;
  q = le->prox;

  while (q != NULL && q->dado != y) {
    p = q;
    q = q->prox;
  }
  nova->prox = q;
  p->prox = nova;
};