#include <stdio.h>

int main(){

  FILE *file; //Declara um tipo FILE em um ponteiro

  file = fopen("teste.txt", "w"); // Abre o arquivo OBS: se o arquivo nao existir, um novo eh criado, exceto 'r'

  fprintf(file, "Ola mundo"); //adiciona texto no arquivo

  file = fopen("teste.txt", "a");

  fprintf(file,"\ntudo bem com voces?"); //adiciona texto sem excluir o antigo

  fclose(file); //fecha o arquivo

}