#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void licz();

int main()
{
  licz();
}
void licz()
{
  int i;
  printf("Podaj 6 liczb, oddziel je spacjami:");
  int tablica[6];
  for(int i=0;i<6;i++)
    scanf("%d",&tablica[i]);
  printf("Poczatek: ");
  for(i=0; i<=5; i++)
    printf("%d ",tablica[i]);

  printf("Koniec: ");
  for (i=5; i>=0; i--)
    printf("%d ",tablica[i]);
  
}
