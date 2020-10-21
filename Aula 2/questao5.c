#include <stdio.h>

int main(void) {
  float salario, prestacao, porcentagem;
  printf("Por favor, digite o preço do seu salário bruto: ");
  scanf("%f", & salario);
  printf("Por favor, informe o valor da sua prestação: ");
  scanf("%f", & prestacao);
  porcentagem = (salario*30)/100;
  if (prestacao <= porcentagem){
    printf("\nParabéns, o empréstimo pode ser concedido!");
  }
  else{
    printf("\nSinto muito, mas o empréstimo não pode ser concedido.");
  }
  return 0;
}