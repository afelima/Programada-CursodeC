#include <stdio.h>

int main(void) {
  float peso,altura;
  printf("Por favor, digite seu peso = ");
  scanf("%f", & peso);
  printf("Por favor, digite sua altura = ");
  scanf("%f", & altura);
  printf("Seu IMC é de = ");
  printf("%f",peso/(altura*altura));
  return 0;
}
