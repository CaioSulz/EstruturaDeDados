#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int chave;
    struct no *esq, *dir;
} no;

no* removeraiz(no* r) {
    if (r == NULL) {
        return NULL;
    }

    no* p;
    no* q;
    if (r->esq == NULL) {
        q = r->dir;
        free(r);
        return q;
    }

    p = r;
    q = r->esq;
    while (q->dir != NULL) {
        p = q;
        q = q->dir;
    }

    if (p != r) {
        p->dir = q->esq;
        q->esq = r->esq;
    }
    q->dir = r->dir;
    free(r);
    return q;
}

no* remover(no* r, int x) {
    if (r == NULL) {
        return NULL;
    }

    if (x < r->chave) {
        r->esq = remover(r->esq, x);
    } else if (x > r->chave) {
        r->dir = remover(r->dir, x);
    } else {

        return removeraiz(r);
    }
    return r;
}