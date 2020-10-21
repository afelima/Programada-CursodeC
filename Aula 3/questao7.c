#include <stdio.h>

int main(){
	int matriz[50][5], contador = 0, i = 0, j;
	float media, maiormedia = 10.0, aprox;
	
	do{
		printf("\nDigite a nota dos estudantes: \n %dº - ",i+1);
		for(j = 0; j < 5; j++){
			scanf("%d", &matriz[i][j]);
		}
		i++;
	}while(i<50);
	
	for(i = 0; i < 50; i++){
		for(j = 0; j < 5; j++){
			aprox += matriz[i][j];
		}
		media = aprox/5.0;
		printf("Média do estudante %d: %f\n",i+1, media);
		if(maiormedia < media)
			maiormedia = media;
		if(media >= 7.0)
			contador++;
		aprox = 0;
	}
	printf("Maior média: %f\n",maiormedia);
	printf("Estudantes com média maior que 7: %d\n", contador);
}