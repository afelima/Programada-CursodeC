#include <stdio.h>

int main(void) {
  float preco;
  float desconto;
  float novopreco;
  printf("Por favor, digite o preço do produto: ");
  scanf("%f", &preco);
  printf("\n > Digite a porcentagem do desconto: ");
  scanf("%f", &desconto);
  printf(" >> O novo preço é de = R$ %f \n", preco -(preco*desconto/100));
  novopreco = preco - (preco*desconto/100);
  printf(" >> O desconto foi de = R$ %f \n", preco - novopreco);
  return 0;
}