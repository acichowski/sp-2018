
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void wynik();
int main(){
    wynik();
    
}

void wynik()
{
    int a, b, wynik=0;
    printf("Podaj liczbe");
    scanf("%d",&a);
    if(1>a)
    {
        printf("Liczba %d jest mniejsza od 1",a);
        exit (1);
    }
    for(b=0;b<=a;b++){
    wynik +=b;
    }
    printf("Suma wychodzi %d",wynik);
    }
