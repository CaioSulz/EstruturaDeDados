

#include <stdio.h>

// A função de busca sequencial
int buscaSequencialDesorder(int *V, int n, int chave) {
    int p, posic = -1;
    for(p = 0; p < n; p++) {
        if(chave == V[p]) {
            posic = p;
            break; // Uma vez que a chave foi encontrada, não há necessidade de continuar o loop
        }
    }
    return posic;
}

int main() {
    int array[] = {10, 7, 5, 2, 9, 3, 12}; // Array de exemplo
    int tamanho = 7; // Calculando o tamanho do array
    int chave = 12; // Chave que será procurada

    // Testando a função de busca
    int posicao = buscaSequencialDesorder(array, tamanho, chave);

    if(posicao != -1) {
        printf("Chave encontrada na posição %d.\n", posicao);
    } else {
        printf("Chave não encontrada no array.\n");
    }

    return 0;
}