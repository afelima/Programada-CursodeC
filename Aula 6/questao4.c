#include <stdio.h>

struct Cliente{
  int idade, matricula;
  float apolice;
  char nome[20];
  char estadocivil;
};


float mediapolice(struct Cliente *a, int n){
  float soma = 0;
  int i;
  for(i = 0; i < n; i++){
   	soma += a[i].apolice;
  }
  return soma/n;
}

int maior_apolice(struct Cliente *a, int n){
  float max = a[0].apolice;
  char max_nome[20];
  strcpy(a[0].nome, max_nome);
  char max_estadocivil = a[0].estadocivil;
  int i;
  	
  for(i = 1; i < n; i++){
   	if (a[i].apolice > max){
     	max = a[i].apolice;
     	strcpy(max_nome, a[i].nome);
  		max_estadocivil = a[i].estadocivil;
   	}
  }
  printf("Maior apolice: %f\n", max);
  printf("Estado civil: ");
  if(max_estadocivil == 's' || max_estadocivil == 'S')
  	printf("Solteiro\n");
  if(max_estadocivil == 'd' || max_estadocivil == 'D')
  	printf("Divorciado\n");
  if(max_estadocivil == 'c' || max_estadocivil == 'C')
  	printf("Casado\n");
  printf("nome: %s\n", max_nome);
  return 0;
}

float idadeporcent(struct Cliente *a, int n){
  int count = 0, i;
  for(i = 0; i < n; i++){
    if(a[i].idade < 40){
    	count++;
    }
  }
  return count*100/n;
}

int main() {
  int i, n;
  struct Cliente *vector;
  
  printf("Número de clientes: ");
  scanf("%d",&n);
    	
  vector = (struct Cliente*)malloc(n * sizeof(struct Cliente));
  	
  for(i = 0; i < n; i++){
   	printf("Cliente %d nome = ", i+1);
   	scanf(" %c", &vector[i].nome);
   	printf("Cliente %d idade = ", i+1);
   	scanf("%d", &vector[i].idade);
   	printf("Cliente %d estado civil \n (S solteiro, C para casado, D para divorciado) = ", i+1);
    scanf(" %c", &vector[i].estadocivil);
    printf("Cliente %d matricula = ", i+1);
    scanf("%d", &vector[i].matricula);
    printf("Cliente %d valor da apolice = ", i+1);
    scanf("%f", &vector[i].apolice);
  }
  printf("Media de apolice de casados : %f\n", mediapolice(vector, n));
  maior_apolice(vector, n);
  printf("Porcentagem de clientes com menos de 40 anos: %f\n", idadeporcent(vector, n));
} 