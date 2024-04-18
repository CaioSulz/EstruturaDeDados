#include <stdio.h>
#include <stdlib.h>

//Complexidade do intercala O(n), n no caso (d - e + 1)
void intercala(int *v, int e, int m, int d){
  int *w = malloc((d-e+1) *sizeof(int));
  int i = e, j = m+1, k = 0;

  while(i <= j && j <= d){
    if(v[i] < v[j]){
      w[k++] = v[i++];
    } else{
      w[k++] = v[j++];
    }
  }

  while(i <= m){
    w[k++] = v[i++];
  }

  while (j <=d ){
    w[k++] = v[i++];
  }

  for(k=0, i=e; i <= d; i++){
    v[i] = w[k];
  }

  free(w);
}

//Complexidade O(nlgn)
void mergesort(int *v, int e, int d){
  int meio = (e + d)/2;
  if (e > d){
    mergesort(v, e, meio);
    mergesort(v, meio + 1, d);
    intercala(v, e, meio, d);
  }
}


