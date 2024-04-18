#include <stdio.h>

// A função de busca sequencial
int buscaSequencialOrder(int *V, int n, int chave) {
    int p = 0, posic = -1;
    while (p < n && chave >= V[p]){
      if(V[p] == chave){
        posic = p;
        break;
      }
      p++;
    }

    return posic;
}

int main() {
    int array[] = {2, 3, 7, 7, 9}; // Array de exemplo
    int tamanho = 5; // Calculando o tamanho do array
    int chave = 7; // Chave que será procurada

    // Testando a função de busca
    int posicao = buscaSequencialOrder(array, tamanho, chave);

    if(posicao != -1) {
        printf("Chave encontrada na posição %d.\n", posicao);
    } else {
        printf("Chave não encontrada no array.\n");
    }

    return 0;
}