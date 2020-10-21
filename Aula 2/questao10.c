#include <stdio.h>

int main(void) {
  int numero = 1, somapar = 0, contadorpar = 0;
  float somaimpar = 0, contadorimpar = 0, soma = 0, contador = 0;
  while(numero > 0){
    printf("\n>> Digite o número desejado: ");
    scanf("%d", &numero);
    if(numero > 0){
      if(numero % 2 == 0){
        somapar = numero + somapar;
        contadorpar++;
      }
      else{
        somaimpar = numero + somaimpar;
        contadorimpar++;
      }
      soma = numero + soma;
      contador++;
    }
  }
  printf("\n\nMédia dos valores pares = %d", somapar/contadorpar);
  printf("\nMédia dos valores ímpares = %f", somaimpar/contadorimpar);
  printf("\nMédia geral dos números = %f", soma/contador);
  return 0;
}