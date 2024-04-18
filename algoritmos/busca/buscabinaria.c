#include <stdio.h>

// A função de busca binaria
int buscaBinaria(int *V, int n, int chave) {
    int p, inicio, meio, final;
    inicio = 0;
    final = n - 1;

    while(inicio <= final){

      meio = (inicio + final)/2;
      
      if (chave == V[meio])
        return meio;
      if (chave < V[meio])
        final = meio - 1;
      else  
        inicio = meio + 1;
    }
      
    return -1;
}

int main() {
    int array[] = {2, 3, 7, 7, 9, 10, 11, 13, 16, 20}; // Array de exemplo
    int tamanho = 10; // Calculando o tamanho do array
    int chave = 7; // Chave que será procurada

    // Testando a função de busca
    int posicao = buscaBinaria(array, tamanho, chave);

    if(posicao != -1) {
        printf("Chave encontrada na posição %d.\n", posicao);
    } else {
        printf("Chave não encontrada no array.\n");
    }

    return 0;
}