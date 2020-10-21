#include <stdio.h>

struct Pessoa{
	int idade, crianca;
	float salario;
	char genero;
};


float mediasalario(struct Pessoa a[]){
	float soma = 0;
	int i;
	for(i = 0; i < 120; i++){
		soma += a[i].salario;
	}
	return soma/120.0;
}

void menormaior(struct Pessoa a[]){
	float max = a[0].salario, min = a[0].salario;
	char max_genero, min_genero;
	int i;
	for(i = 1; i < 120; i++){
		if (a[i].salario < min){
    		min = a[i].salario;
    		min_genero = a[i].genero;
		}
	}
	for(i = 1; i < 120; i++){
    	if (a[i].salario > max){
    		max = a[i].salario;
      		max_genero = a[i].genero;
		}
	}
	if(min_genero == 'f' || min_genero == 'F')
    	printf("\nmenor salario: female\n");
  
  	else if(min_genero == 'm' || min_genero == 'm')
    	printf("\nmenor salario: male\n");
  
  	if(max_genero == 'f' || max_genero == 'F')
    	printf("\nmaior salario: female\n");
  
  	else if(max_genero == 'm' || max_genero == 'm')
    	printf("\nmaior salario: male\n");
  
}

float mulherfilho(struct Pessoa a[]){
  	int contador = 0, i;
  	for(i = 0; i < 120; i++){
   		if((a[i].genero == 'f' || a[i].genero == 'F') && a[i].crianca > 0){
      	contador++;
    	}
  	}
  	return (contador*100)/120.0;
}

int main() {
  int i;
  struct Pessoa vector[120];
  for(i = 0; i < 120; i++){
    printf("\nPessoa %d idade = ", i+1);
    scanf("%d", &vector[i].idade);
   	printf("\nPessoa %d quantos filhos = ", i+1);
   	scanf("%d", &vector[i].crianca);
   	printf("\nPessoa %d salario = ", i+1);
   	scanf("%f", &vector[i].salario);
   	printf("Pessoa %d genero  \n digite 'f' para mulher e 'm' para homem = ", i+1);
    scanf("%s", &vector[i].genero);
  }
  printf("media de salario : %f\n", mediasalario(vector));
  menormaior(vector);
  printf("porcentidadem de mulheres com filhos : %f\n", mulherfilho(vector));
  return 0;
} 
