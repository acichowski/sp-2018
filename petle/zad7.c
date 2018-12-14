
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void licz();

int i,dod=0;
int main()
{
  licz();
}
void licz()
{
  int tablica[6];
  printf("Podaj 6 liczb rzeczywistych: ");
   for(i=0; i<=5; i++)
  {
    scanf("%d",&tablica[i]);
  }
  for(i=0; i<=5; i++)
  {
    if(tablica[i]>=0)
      dod=dod+1;
  }

  printf("Ilosc dodatnich liczb= %d\n",dod);


}
