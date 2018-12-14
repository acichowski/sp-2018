
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void licz();

int i,max,min;
int main()
{
  licz();
}
void licz()
{
  int tablica[6];
  printf("Podaj 6 liczb rzeczywistych");
   for(i=0; i<=5; i++)
  {
    scanf("%d",&tablica[i]);
  }
  max = 0;
  for (i = 0; i < 6; ++i)
  {
  if (tablica[i] > max)
    max = tablica[i];
  }
  min = tablica[1];
  for (i = 0; i < 6; ++i)
  {
    if (tablica[i] < min)
    min= tablica[i];
  }
  printf("Najmniejsza=%d\n",min);
  printf("Najwieksza=%d",max);

}
