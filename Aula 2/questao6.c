#include <stdio.h>

int main(void) {
  int contador, numero;
  printf("Digite um número inteiro para a tabuada: ");
  scanf("%d", &numero);
  for(contador = 1; contador <= 10; contador++){
    printf("%d x %d = %d\n", contador, numero, contador*numero);
  }
  return 0;
}