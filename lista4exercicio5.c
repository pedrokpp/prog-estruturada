#include <stdio.h>

void calcula_corrida(float dist, float *b1, float *b2){
float bandeirada = 4.95;

*b1 = bandeirada + (2.5 * dist);
*b2 = bandeirada + (3 * dist);
}

float main(void){

float dist;
float b1;
float b2;
int bandeira;
float valor_corrida;

printf("Digite a distancia percorrida em km: ");
scanf("%f", &dist);

printf("\nDigite 1 para bandeira 1 ou digite 2 para bandeira 2.\n");
scanf("%d", &bandeira);
printf("\n");

calcula_corrida(dist, &b1, &b2);

if(bandeira == 1){
    printf("Valor da corrida: R$ %.2f\n", b1);
}

if(bandeira == 2){
        printf("Valor da corrida: R$ %.2f\n", b2);

}
}
