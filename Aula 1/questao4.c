#include <stdio.h>

int main(void) {
  int kg;
  printf("Por favor, digite o peso da criança em kg: ");
  scanf("%d", &kg);
  printf(" \n > A criança deve tomar %d gotas do remédio.\n", (kg/2)*5);
  return 0;
}