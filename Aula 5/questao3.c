#include<stdio.h>

void calculos(float num1, float num2, float *adicao, float *subtrai, float *multip){
	*adicao = num1 + num2;
	*subtrai = num1 - num2;
	*multip = num1 * num2;
}

int main(){
	float num1, num2, adicao, subtrai, multip;
	printf("\n Digite o primeiro número: ");
	scanf("%f",&num1);
	printf("\n Digite o segundo número: ");
	scanf("%f",&num2);
	calculos(num1, num2, &adicao, &subtrai, &multip);
	printf(" Adição: %f \n Divisão: %f \n Multiplicação: %f", adicao, subtrai, multip);
	return 0;
}