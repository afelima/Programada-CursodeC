#include <stdio.h>

struct Cliente{
  int conta, idadencia;
  float saldo;
};


float mediasalario(struct Cliente a[]){
  float soma = 0;
  int i;
  for(i = 0; i < 2000; i++){
   	soma += a[i].saldo;
  }
  return soma/2000.0;
}

void menormaior(struct Cliente a[], int *min_conta, int *max_conta, int *min_idadencia, int *max_idadencia){
  float max = a[0].saldo, min = a[0].saldo;
  *min_conta = a[0].conta;
  *min_idadencia = a[0].idadencia;
  *max_conta = a[0].conta;
  *max_idadencia = a[0].idadencia;
  int i;
  for(i = 1; i < 2000; i++){
   	if (a[i].saldo < min){
     	min = a[i].saldo;
     	*min_conta = a[i].conta;
     	*min_idadencia = a[i].idadencia;
   	}
  }
  for(i = 1; i < 2000; i++){
   	if (a[i].saldo > max){
     	max = a[i].saldo;
     	*max_conta = a[i].conta;
     	*max_idadencia = a[i].idadencia;
   	}
  }
}

float menorsaldo(struct Cliente a[]){
  int contador = 0, i;
  for(i = 0; i < 2000; i++){
   	if(a[i].saldo < 1000){
     	contador++;
   	}
  }
  return contador*100/2000.0;
}

int main() {
  int i, min_conta, max_conta, min_idadencia, max_idadencia;
  struct Cliente vector[2000];
 	for(i = 0; i < 2000; i++){
   	printf("\nCliente %d conta = ", i+1);
   	scanf("%d", &vector[i].conta);
   	printf("\nCliente %d idadencia = ", i+1);
   	scanf("%d", &vector[i].idadencia);
   	printf("\nCliente %d saldo = ", i+1);
   	scanf("%f", &vector[i].saldo);
 	}
 	printf("\nMedia do saldo: %f\n", mediasalario(vector));
  menormaior(vector, &min_conta, &max_conta, &min_idadencia, &max_idadencia);
  printf("Conta com menor saldo: %d\n",min_conta);
  printf("Agência com com menor saldo: %d\n",min_idadencia);
  printf("Conta com maior saldo: %d\n", max_conta);
  printf("Agência com maior saldo: %d\n", max_idadencia);
  printf("Porcentidadem de clientes com saldo menor que 1000: %f\n", menorsaldo(vector));
  return 0;
} 