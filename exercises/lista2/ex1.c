#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int mediana(int *v, int e, int d){
  int meio = (e + d)/2;

  if(v[e] > v[meio])
    troca(&v[e], &v[meio]);
  if(v[meio] > v[d]){
    troca(&v[meio], &v[d]);
    if(v[e] > v[meio])
      troca(&v[e], &v[meio]);
  }

  troca(&v[meio], &v[d - 1]);
}

int particiona (int *v, int e, int d){
  
  int p = mediana(v, e, d);
  int j, k;

  for(k = e, j = e; k < d; k++){
    if (v[k] < v[d]){
      troca(&v[k], &v[j]);
      j++;
    }
  }
  
  troca(&v[j], &v[d]);
  return j;
}

void quicksort(int *v, int e, int d){
  if(e<d){
    int j = particiona(v, e, d);
    quicksort(v, e, j-1);
    quicksort(v, j+1, d);
  }
}

int main(){

  int qnt;
  scanf("%d", &qnt);
  int *v = malloc((qnt)*sizeof(int));

  for (int i = 0; i < qnt; i++){
    scanf("%d", &v[i]);
  }

  quicksort(v, 0, qnt - 1);

  for(int i = 0; i < qnt; i++){
    printf("%d ", v[i]);
  }
  printf("\n");
}