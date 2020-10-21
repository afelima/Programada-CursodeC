#include <stdio.h>

int main(void) {
  int contador = 1, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, branco = 0, voto, porcentagem1, porcentagem2, porcentagem3, porcentagem4, porcentagem5;
  do{
    printf("\n\nSelecione uma das opções abaixo: \n [1] Candidato 1 \n [2] Candidato 2 \n [3] Candidato 3 \n [4] Candidato 4 \n [5] Voto em branco \n [+] Caso digite outro número o voto será nulo\n >> ");
    scanf("%d", &voto);
    switch(voto){
      case 1:
        printf("Você votou no candidato 1\n");
        candidato1 = candidato1+1;
        break;
      case 2:
        printf("Você votou no candidato 2\n");
        candidato2 = candidato2+1;
        break;
      case 3:
        printf("Você votou no candidato 3\n");
        candidato3 = candidato3+1;
        break;
      case 4:
        printf("Você votou no candidato 4\n");
        candidato4 = candidato4+1;
        break;
      case 5:
        printf("Você votou em branco\n");
        branco = branco+1;
        break;
      default:
        printf("Seu voto foi nulo\n");
        break;
    }
    contador = contador+1;
  }while (contador<=2000);
  porcentagem1 = (candidato1*100)/2000;
  porcentagem2 = (candidato2*100)/2000;
  porcentagem3 = (candidato3*100)/2000;
  porcentagem4 = (candidato4*100)/2000;
  porcentagem5 = (branco*100)/2000;
  printf("\n\n RESULTADO: \n\n");
  printf("\nCandidato 1 teve %d votos = %d porcento\n",candidato1, porcentagem1);
  printf("Candidato 2 teve %d votos = %d porcento\n", candidato2, porcentagem2);
  printf("Candidato 3 teve %d votos = %d porcento\n", candidato3, porcentagem3);
  printf("Candidato 4 teve %d votos = %d porcento\n", candidato4, porcentagem4);
  printf("Os votos em branco foram de %d, totalizando %d porcento dos votos\n", branco, porcentagem5);
  if (porcentagem1 > porcentagem2 && porcentagem1 > porcentagem3 && porcentagem1 > porcentagem4){
    printf("\nCandidato 1 é o ganhador das eleições\n");
  }
  if (porcentagem2 > porcentagem1 && porcentagem2 > porcentagem3 && porcentagem2 > porcentagem4){
    printf("\nCandidato 2 é o ganhador das eleições\n");
  }
  if (porcentagem3 > porcentagem1 && porcentagem3 > porcentagem2 && porcentagem3 > porcentagem4){
    printf("\nCandidato 3 é o ganhador das eleições\n");
  }
  if (porcentagem4 > porcentagem1 && porcentagem4 > porcentagem2 && porcentagem4 > porcentagem3){
    printf("\nCandidato 4 é o ganhador das eleições\n");
  }
  else{
    printf("\n Houve um empate!");
  }
  return 0;
}