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
  noPilha *novoNo = malloc(sizeof(noPilha));
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

void pre_ordem(no *raiz) {
  if (raiz == NULL)
    return;

  pilha pilha;
  iniciaPilha(&pilha);
  empilhar(&pilha, raiz);

  while (!pilhaVazia(&pilha)) {
    no *noAtual = desempilhar(&pilha);
    printf("%d ", noAtual->dado);

    if (noAtual->dir != NULL)
      empilhar(&pilha, noAtual->dir);

    if (noAtual->esq != NULL)
      empilhar(&pilha, noAtual->esq);
  }
  printf("\n");
}

