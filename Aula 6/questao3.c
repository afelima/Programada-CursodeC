#include <stdio.h> 
#include <stdlib.h> 


void media_soma(int *ponteiro, int n, int *soma, float *media){
	int i;
	for (i = 0; i < n; i++){
		*soma += ponteiro[i];
	}
	*media = *soma/n;
}

int main(){ 
  int* ponteiro; 
  int n, i, soma = 0;
  float media; 
  
  printf("Digite o numero de elementos: \n");
  scanf("%d",&n);
  ponteiro = (int*)malloc(n * sizeof(int)); 
  
  if (ponteiro == NULL) { 
    printf("Memoria não alocada.\n"); 
    exit(0); 
  }
  for (i = 0; i < n; i++)
  scanf("%d",&ponteiro[i]);
    
  media_soma(ponteiro, n, &soma, &media);
  printf("soma = %d\n",soma);
  printf("media = %f\n",media);
    
}