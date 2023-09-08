#include <stdio.h>


//Criação de um conversor de temperatura

int main(void){

  float num;
  char option, again;
  float result;

  printf("Bem vindo ao conversor de temperatura!\n");

  do {

    printf("Escolha uma opção:\n\nC - Fahrenheit para Celsius\tF - Celsius para Fahrenheit\tS - Sair\n");
    scanf(" %c", &option);

    if(option = 'S'){
      return 0;
    }

    printf("Digite os valores\n");
    scanf(" %f", &num);

    switch (option){

      case 'C':

        result = (num - 32)/2;
        printf("O resultado da conversão é %.1f C°\n", result);
        break;
      
      case 'F':

        result = (num*1.8) + 32;
        printf("O resultado da conversão é %.1f F°\n", result);
        break;
        
    }

    printf("Deseja realizar nova conversão?\n\ns - sim\t n - não\n");
    scanf(" %c", &again);

  } while (again != 'n');

  return 0;

}