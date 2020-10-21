#include <stdio.h>

int main(void) {
  int dias, meses, ano, dia;
  printf("Digite sua idade apenas em dias: ");
  scanf("%d", &dias);
  ano = (dias/365);
  meses = (dias % 365)/30;
  dia = (dias % 365) % 30;
  printf("Sua idade em anos, meses e dias é: \n %d anos, %d mês (es) e %d dia (s) \n", ano, meses, dia);
  return 0;
}