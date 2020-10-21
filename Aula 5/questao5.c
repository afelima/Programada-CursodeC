#include <stdio.h>

void escalar(int mat[3][3], int y){
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			mat[i][j] = y * mat[i][j];
		}
	}
}

int main(){
	int matriz[3][3], y, i, j;
	printf("Digite a matriz: \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("\nDigite y: \n");
	scanf("%d",&y);
  printf("\n Matriz escalar: \n\n");
	escalar(matriz, y);
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}