#include <stdio.h>

int funcao(int vetor[10]){
  int contador, contador2 = 0, soma = 0;
  for(contador = 0; contador <=9; contador++){
    vetor[contador] = contador;
    soma = contador + soma;
    printf("\nNúmero %d = %d", contador2 + 1, contador);
    contador2++;
  }
  return printf("\n\nMédia = %d", soma/10);
}

int main(){
  int vetor[10];
  funcao(vetor);
}