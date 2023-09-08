#include <stdio.h>

/* Criação de uma calculadora, teremos que ter 2 tipos de opções:
- adição, subtração, multiplicação e divisão
- selecionar o numeros */

int main(void){

  char operation;
  int number1, number2;
  int result = 0;
  char newop;

   

  do {

    printf("\nWelcome to THE CALCULATOR!\n\nEscolha a operação que deseja realizar:\n \t a - adição\n \t s - subtração\n \t m - multiplicação\n \t d - divisão\n \t e - sair\n");
    scanf(" %c", &operation);
    printf("digite os numeros da operacao!\n");
    scanf("%d %d", &number1, &number2);

    switch (operation){

      case 'a':

        result = number1 + number2; 
        printf("O resultado da sua operação é: %d\n", result);
        break;
      
      case 's':

        result = number1 - number2; 
        printf("O resultado da sua operação é: %d\n", result);
        break;

      case 'm':

        result = number1 * number2; 
        printf("O resultado da sua operação é: %d\n", result);
        break;

      case 'd':
        if (number2 == 0){
          printf("Operação inválida!\n");
        } else{

        }
        result = number1/number2; 
        printf("O resultado da sua operação é: %d\n", result);
        break;

      default: 
        printf("Invalido \n");
        break;

    }

    printf("Deseja nova operacao?\n s - sim\n n - nao\n");
    scanf(" %c", &newop);

  } while (newop == 's');

  printf("Obrigado por usar CALCULATOR\n");

  
  return 0;

}

