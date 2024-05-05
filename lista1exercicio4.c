#include <stdio.h>

float calculaMedia(float soma,int num){
float media;

media = soma / num;

return media;
}

float main(void){
float nota[3];
int i, numProvas = 3;
float soma = 0;

for(i = 0; i < 3; i++){
    printf("Digite a nota da prova %d: ", (i + 1));
    scanf("%f", &nota[i]);

    if(nota[i] >= 0 && nota[i] <= 10)
        soma += nota[i];

    if(nota[i] < 0 || nota[i] > 10){
        printf("Nota invalida, tente novamente.\n\n");
        i--;
    }
}
printf("\nMedia do aluno: %.2f\n", calculaMedia(soma, numProvas));

if(calculaMedia(soma, numProvas) >= 6)
    printf("Aluno Aprovado.\n");
if(calculaMedia(soma, numProvas) < 6 && calculaMedia(soma, numProvas) >= 4)
    printf("Aluno reprovado com direito a realizacao de VS.\n");
if(calculaMedia(soma, numProvas) < 4)
    printf("Aluno Reprovado.\n");

return 0;
}
