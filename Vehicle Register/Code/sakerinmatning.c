#include "source.h"

int sakerinmatning(){
int retur, kontroll;
char vektor[MAX_CHAR];

  do
  {
    kontroll = 0;
    scanf("%s", vektor);
    
    for(int i=0; i<strlen(vektor); i++)
    {
      if(!isdigit(vektor[i]))
      {
        kontroll = 1;
        printf("Går ej att läsa\n");
      }
    }
  } while(kontroll == 1);

  retur = atoi(vektor);
  return retur;
}