#include <stdio.h>

int main(void) {
  int diaria1 = 62, diaria2 = 80;
  float km1 = 1.40, km2 = 1.20;
  float km;
  printf("Por favor, digite de quantos km é a sua viagem = ");
  scanf("%f", &km);
  printf("\n > O preço da primeira agência será de = R$ %f \n",(km*km1)+diaria1);
  printf("\n > O preço da segunda agência será de = R$ %f \n", (km*km2)+diaria2);
  return 0;
}