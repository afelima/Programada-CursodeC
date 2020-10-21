#include <stdio.h>

int main(void) {
  int idade, peso;
  printf("Por favor, digite sua idade: ");
  scanf("%d", & idade);
  printf("Por favor, digite seu peso: ");
  scanf("%d", & peso);
  if (idade >= 18 && idade <= 65 && peso >= 50){
    printf("\nVocê está apto para ser doador(a)! Obrigada pela sua contribuição!");
  }
  else{
    printf("\nSinto muito, mas você não pode doar.");
  }
  return 0;
}