#include<stdio.h>

int main(){
	int matriz[10][10], maior, menor, i, j;
	
	printf("\n Digite os números para a matrix: ");
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
      printf("\n> ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	maior = matriz[0][0];
	menor = matriz[0][0];
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if(maior < matriz[i][j])
				maior = matriz[i][j];
			if(menor > matriz[i][j])
				menor = matriz[i][j];
		}
	}
	printf("maior elemento: %d\n", maior);
	printf("menor elemento: %d\n", menor);
}