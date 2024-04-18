#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
  int dado;
  struct celula *prox;
} celula;

void insere_inicio(celula *le, int x){

  celula *newnode;
  newnode = malloc(sizeof(celula));
  newnode -> dado = x;
  newnode -> prox = le->prox;
  le->prox = newnode;
}


void insere_antes(celula *le, int x, int y) {
  celula *newnode,*prev, *p;
  newnode = malloc(sizeof(celula));
  newnode->dado = x;
  prev = p;
  p = le -> prox;

  while (p != NULL && p->dado != y) {
    prev = p;
    p = p->prox;
  }
  newnode->prox = p; 
  prev->prox = newnode;
}