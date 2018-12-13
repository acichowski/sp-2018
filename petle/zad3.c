#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void  liczby();
int main()
{
  liczby();
}

void liczby()
{
  int a, b, i;
  printf("podaj a ,oraz b");
  scanf("%d %d", &a, &b);
  if(a<b)
    {
        for(i=a+1; i<=b-1; i++)
        printf("%d,", i );
    }
  if(a>b)
  {
  exit(1);
  }
}
