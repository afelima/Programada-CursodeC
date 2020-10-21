#include<stdio.h>

void celsius(){
	float fahrenheit, celsius;
	printf("\n Digite a temperatura em fahrenheit: ");
	scanf("%f",&fahrenheit);
	celsius = ((5.0/9.0)*(fahrenheit-32));
	printf("\n A temperatura em celcius é de: %f",celsius);
}

int main(){
	celsius();
}
