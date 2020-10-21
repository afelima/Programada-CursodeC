#include<stdio.h>

int somanatural(int n){
	if(n == 1)
		return 1;
	else if(n <= 0)
		return 0;
	return (2*n-1) + somanatural(n-1);
}

int main(){
	int n;
	printf("\nDigite n: ");
	scanf("%d",&n);
	printf("\nSoma dos n número naturais = %d\n",somanatural(n));
} 