#include <stdio.h>
int main(){
  char str[100], tamanho;

  printf("Digite uma string: ");
  scanf("%s",str);
  for(tamanho=0; str[tamanho]!='\0'; ++tamanho);
  printf("\nTamanho da string: %d",tamanho);
}