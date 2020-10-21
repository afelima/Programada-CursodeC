#include <stdio.h>
int main(){
  int A[5], n, contador, posicao, sim = 0;
  for(contador = 0; contador <= 4; contador++){
    printf("\n> digite um número: ");
    scanf("\n%d", & A[contador]);
  }
  printf("\ndigite um número para pesquisar: ");
  scanf("\n%d", &n);
  for(contador = 0; contador<= 4; contador++){
    if (A[contador] == n){
      posicao = contador;
      sim = 1;
    }
  }
  if (sim == 1){
    printf("\no número existe no vetor e sua posição é %d", posicao);
  }
  else{
    printf("\no numero não existe no vetor");
  }
}