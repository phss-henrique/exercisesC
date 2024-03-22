#include <stdio.h>

  int main(void) {    
  int nota1 = 0;
  int nota2 = 0;
  int notaFinal = 0;

  printf("Digite sua primeira nota: ");
    scanf("%d", &nota1);

  printf("Digite sua segunda nota: ");
    scanf("%d", &nota2);

  notaFinal = (nota1+nota2)/2;

  if(notaFinal < 5){
    printf("Você foi reprovado!");
  }else if(notaFinal >= 5 && notaFinal < 7){
    printf("Você está de recuperação!");
  }else{
    printf("Você foi aprovado");
  }

}