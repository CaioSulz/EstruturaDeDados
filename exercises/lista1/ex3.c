#include <stdio.h>
#include <stdlib.h>

int main(){

  int tam;
  double soma, result;
  int i = 0;
  int cont = 0;

  scanf("%d\n", &tam);

  int *v = malloc(tam *sizeof(int));

  while (i < tam && 10 <= tam <= 10000 && v[i] <= 1000000){
    scanf("%d", &v[i]); 
    i++; 
  }

  for (i = 0; i < tam; i++){
    soma = soma + v[i];
  }

result = soma/tam;

for (i = 0; i < tam; i++){
  if (v[i] > result){
    printf("%d ", v[i]);
    cont++;
  }
}
if(cont == 0){
  printf("%d", 0);
}

printf("\n");
free (v);

return 0;

}
