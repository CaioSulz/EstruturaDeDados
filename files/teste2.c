#include <stdio.h>

//criar um arquivo txt no terminal: cat > nome.txt

int main(){

  FILE *file;

  file = fopen("novo.txt", "r");

  if(file == NULL){

    printf("Nao foi possivel abrir o arquivo\n"); // condicao caso o arquivo nao exista
    return 0;

  }

  char myString[200];

  while (fgets(myString, 200, file) != NULL){

    printf("%s\n", myString);
  // fputc printa sem ser de maneira formatada
  // fputs
  }; //leitura dos arquivos


  fclose(file);

  return 0;
}