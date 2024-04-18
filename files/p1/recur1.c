#include <stdio.h>

int BuscaCar( char *str,  char c, int pos){

  if(*str = '\0')
    return -1;

  if(*str = c)
    return pos;
  
  else
    return BuscaCar(str + 1, c, pos + 1);
}
 

