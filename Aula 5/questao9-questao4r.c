#include<stdio.h>

int quociente(int n, int d){
	if(n - d < 0){
		return 0;
	}
	return quociente(n-d, d) + 1;
}

int main(){
	int num1, num2;
	printf("\nDigite o primeiro número: ");
	scanf("%d",&num1);
	printf("\nDigite o segundo número: ");
	scanf("%d",&num2);
	printf("%d/%d = %d\n", num1, num2, quociente(num1, num2));
}