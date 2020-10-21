/*questao1:

#include <stdio.h>
int main() {
  int y, *p;
  int v[5]={2,7,1,4,5};
  p = v; //p = v[0]
  y = *p; //y = 2
  p = p + y; //p = v[0] + 2 ou seja p = v[2] que é 1
  printf("%d \n", *p); //imprime 1
  (*p)++; //1 + 1 = 2
  y--; //y - 1 = 1
  (*p) = (*p) + y; // *p = 2 + 1
  printf("%d \n", *p); //imprime 3
}

questao2:
#include <stdio.h>

int main(){
  int x, *p, **q;
  p = &x;
  q = &p;
  x = 10;
  printf("\n%d\n", **q);
}*/
