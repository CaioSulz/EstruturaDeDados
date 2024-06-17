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

void pos_ordem(no *raiz) {
    if (raiz == NULL)
        return;

    pilha pilha1, pilha2;
    iniciaPilha(&pilha1);
    iniciaPilha(&pilha2);

    empilhar(&pilha1, raiz);

    while (!pilhaVazia(&pilha1)) {
        no *noAtual = desempilhar(&pilha1);
        empilhar(&pilha2, noAtual);

        if (noAtual->esq != NULL)
            empilhar(&pilha1, noAtual->esq);
        if (noAtual->dir != NULL)
            empilhar(&pilha1, noAtual->dir);
    }

    while (!pilhaVazia(&pilha2)) {
        no *noAtual = desempilhar(&pilha2);
        printf("%d ", noAtual->dado);
    }

    printf("\n");
}

