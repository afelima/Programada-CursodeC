#include <stdio.h>

int main(){
  int vetor[30], menor, contador, contadois = 0;
  for (contador = 0; contador <= 29; contador++){
    printf("\ndigite o numero para armazenar: ");
    scanf("\n%d", &vetor[contador]);
  }
  menor = vetor[0];
  for (contador = 0; contador <= 29; contador++){
    if (menor>vetor[contador]){
      menor = vetor[contador];
    }
  }
  for (contador = 0; contador <= 29; contador++){
    if (vetor[contador]%menor == 0){
      contadois++;
    }
  }
  printf("o menor valor é %d", menor);
  printf("\na quantidade de números divisíveis pelo menor é %d", contadois);
  return 0;
}