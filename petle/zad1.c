#include <stdio.h>
#include <math.h>

void potega();

int main(){
    
printf("Potega liczby 2:\n");
 
  potega();
  
}
void potega(){
  int a = 2;
  int potega = 2;

  for(int i = 1; potega<2010; i++){
    
    printf("\n %d ^ %d = %d\n", a, i, potega);
    potega *=2;
    
  }

}
