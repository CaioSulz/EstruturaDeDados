#include <stdio.h>

//Leitura de um número para descobrir se o mesmo é primo ou não

int main(void){


  char again;
  

    int num;
    int primo, i = 1;

    printf("Digite um número para saber se ele é primo ou não!\n");
    scanf("%d", &num);

    if(num <= 1){
      printf("Inválido, digite um número maior que 1!\n");
      return 0;
    }
    
    for (i = 2; i <= num/2; i++){
      
      if(num % i == 0){
        primo = 0;
        break;
      } 
    }

    if(primo){
      printf("O número %d é primo!\n", num);
    } else {
      printf("O número %d não é primo!\n", num);
    }

  return 0;

}