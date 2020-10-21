#include <stdio.h>

int main(void) {
  int digito;
  printf("Por favor, digite o último número da placa do veículo: ");
  scanf("%d", & digito);
  if (digito == 1 || digito == 2){
    printf("\nO veículo com essa placa não pode trafegar na segunda-feira.");
  }
  if (digito == 3 || digito == 4){
    printf("\nO veículo com essa placa não pode trafegar na terça-feira.");
  }
  if (digito == 5 || digito == 6){
    printf("\nO veículo com essa placa não pode trafegar na quarta-feira.");
  }
  if (digito == 7 || digito == 8){
    printf("\nO veículo com essa placa não pode trafegar na quinta-feira.");
  }
  if (digito == 9 || digito == 0){
    printf("\nO veículo com essa placa não pode trafegar na sexta-feira.");
  }
  return 0;
}