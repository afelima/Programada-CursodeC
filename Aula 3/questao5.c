#include <stdio.h>

int main(){
	int matriz[4][4], numero, i, j;
	
	printf("\n Digite os números para a matriz: ");
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
      printf("> ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nDigite o número para gerar o produto: ");
	scanf("%d",&numero);
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			matriz[i][j] = numero*matriz[i][j];
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
}