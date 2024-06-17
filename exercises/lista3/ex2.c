#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int dado;
  struct no *esq, *dir;
} no;

typedef struct noPilha {
  no *no;
  struct noPilha *prox;
} noPilha;

typedef struct pilha {
  noPilha *topo;
} pilha;

noPilha *criarNoPilha(no *no) {
  noPilha *novoNo = (noPilha *)malloc(sizeof(noPilha));
  novoNo->no = no;
  novoNo->prox = NULL;
  return novoNo;
}

void iniciaPilha(pilha *pilha) {
  pilha->topo = NULL;
}

int pilhaVazia(pilha *pilha) {
  return pilha->topo == NULL;
}

void empilhar(pilha *pilha, no *no) {
  noPilha *novoNo = criarNoPilha(no);
  novoNo->prox = pilha->topo;
  pilha->topo = novoNo;
}

no *desempilhar(pilha *pilha) {
  if (pilhaVazia(pilha))
    return NULL;
  noPilha *temp = pilha->topo;
  no *no = temp->no;
  pilha->topo = pilha->topo->prox;
  free(temp);
  return no;
}

void em_ordem(no *raiz) {
  pilha pilha;
  iniciaPilha(&pilha);
  no *atual = raiz;

  while (atual != NULL || !pilhaVazia(&pilha)) {
    while (atual != NULL) {
      empilhar(&pilha, atual);
      atual = atual->esq;
    }

    atual = desempilhar(&pilha);
    printf("%d ", atual->dado);

    atual = atual->dir;
  }
  printf("\n");
}

