#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main() {
   double x, z;

   printf("Podaj liczbe rzeczywista: ");
   scanf("%lf", &x);

   if (x >= 0) {
   z = sqrt(x);
   printf("Pierwiastek kwadratowy z %lf to %lf\n", x, z);
   return 0;
   } else {
   printf("Pierwiastek kwadratowy z %lf nie istnieje\n", x);
   exit(1);
   }

}
