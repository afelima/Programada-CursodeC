#include <stdio.h>

int main(void) {
  int peso;
  printf("> Por favor, digite o peso (em kg) do seu doguinho: ");
  scanf("%d", & peso);
  if (peso <= 5){
    printf("\nA porção deve ser de 60g");
  }
  if (peso >= 6 && peso <= 10){
    printf("\nA porção deve ser de 95g");
  }
  if (peso >= 11 && peso <= 15){
    printf("\nA porção deve ser de 135g");
  }
  if (peso >= 16 && peso <= 20){
    printf("\nA porção deve ser de 170g");
  }
  else{
    printf("\nA porção deve ser de 215g");
  }
  return 0;
}
