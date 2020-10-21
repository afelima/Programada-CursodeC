#include <stdio.h>

int main(void) {
  float nota, soma = 0;
  int contador = 0, notasete;
  while(nota >= 0 && nota <= 10){
    printf("\n>> Digite a nota: ");
    scanf("%f", &nota);
    if(nota >=0 && nota<= 10){
      soma = nota+soma;
      contador++;
      if (nota >= 7){
        notasete++;
      }
    }
  }
  printf("\n\nMédia de notas = %f", soma/contador);
  printf("\nNotas maiores ou iguais a 7 = %d", notasete);
  return 0;
}