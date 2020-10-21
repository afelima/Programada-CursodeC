#include <stdio.h>
int main(){
  int V[200], x, y, A[200], B[200], contador;
  for(contador = 0; contador <=199; contador++){
    printf("\n> digite um número: ");
    scanf("\n%d", & V[contador]);
  }
  for (contador = 0; contador <=199; contador++){
    if (V[contador]%2 == 0){
      x++;
      A[x] = V[contador];
    }
    else{
      y++;
      B[y] = V[contador];
    }
  }
}