
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void print_board();

int main()
{
  print_board();
}

void print_board()
{
  int a, b;
  for(a=0; a<10; a++)
  {
    if(a%2==1)
      printf(" ");
    for(b=0; b<10; b++)
      printf("*");
    printf("\n");
  }
}
