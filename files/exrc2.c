/* Receives strings from keyboard and writes them to file */
#include <stdio.h>
#include <string.h>

int main( )
{
  FILE *fp;
  char s[80];
  fp = fopen ( "POEM.TXT", "w" ) ;
  if ( fp == NULL )
  {
    puts ( "Cannot open file" ) ;
    return 0;
  }
  printf ( "\nEnter a few lines of text:\n" ) ;
  while ( strlen ( scanf ("%c", &s) ) > 0 )
  {
    fputs ( s, fp ) ;
    fputs ( "\n", fp ) ;
  }
  fclose ( fp );

  return 0;
}
  