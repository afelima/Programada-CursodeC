#include <stdio.h>

int main(void) {
  float r=1;
  while(r>0){
    printf("\n>> Digite o raio: ");
    scanf("%f", &r);
    printf("\n  A = pi x %f x %f = %f\n", r,r, r*r*3.14);
  }
  return 0;
}