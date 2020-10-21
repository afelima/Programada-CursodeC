#include<stdio.h>

int elevado(int b, int e){
	if(e == 1){
		return b;
	}
	b *= elevado(b, e-1);
	return b;
}

int main(){
	int b, e;
	printf("\n Digite b: ");
	scanf("%d",&b);
	printf("\n Digite e: ");
	scanf("%d",&e);
	printf("b^e = %d\n", elevado(b,e));
}