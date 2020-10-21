#include<stdio.h>
int div(int num1, int num2){
	return num1 % num2 == 0 ? 1 : 0;
}

int main(){
	int num1, num2;
	printf(" Digite o primeiro número: ");
	scanf("%d",&num1);
	printf("\n Digite o segundo número: ");
	scanf("%d",&num2);
  if (div(num1, num2) == 0){
    printf("\n O número não é divisível pelo outro!\n");
  }
  else{
    printf("\n Os números são divisíveis! \n");
  }
}