#include <stdio.h>

int main(void) {
  int idade, fluencia;
  float altura;
  printf("Por favor, digite sua idade: ");
  scanf("%d", & idade);
  printf("Por favor, digite sua altura em metro (ex.: 1.59): ");
  scanf("%f", & altura);
  printf("Por favor, informe quantos idiomas você fala com fluência: ");
  scanf("%d", & fluencia);
  if (idade >= 24 && altura >= 1.70 && fluencia >= 2){
    printf("\nParabéns, você preenche os requisitos para ser contratada!");
  }
  else{
    printf("\nSinto muito, mas você não se encaixa nos requisitos apropriados para o emprego.");
  }
  return 0;
}