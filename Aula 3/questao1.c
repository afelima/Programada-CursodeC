#include <stdio.h>

int main() {
  int vetora[10], vetorb[10], vetorc[10], contador;
  for  (contador = 1; contador <= 10; contador++){
    printf("digite um número p a: ");
    scanf("%d", &vetora[contador]);
  }
  for (contador = 1; contador<= 10; contador++){
    printf("digite um número p b: ");
    scanf("%d", &vetorb[contador]);
  }
  for (contador = 1;contador <= 10; contador++){
    printf("%d\n", vetorc[contador]);
  }
  return 0;
}
