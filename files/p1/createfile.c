/* Criação de um arquivo*/

main(){

  FILE *fp;
  char ch;
  fp = fopen("nomearq.c", "r");    /*fopen = funcao para abrir arq,
  "r" eh formato de leitura*/
  /*Modo de leitura NAO pode modificar o conteudo do arquivo*/
  while(1){
    ch = fgetc(fp);     /*fgetc le caracter por carcter ate o final
    do arquivo, apos a leitura, o ponteiro passa para o prox caracter*/            
    if(ch == EOF)
      break;
    printf("%c", ch);

  }

  fclose(fp);

}