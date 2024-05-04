#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 10

int main(){

int vetor[TAMANHO_VETOR];
int *inicio = &vetor[0];
int *fim = &vetor[TAMANHO_VETOR - 1];
int i;

for(int i = 0; i < TAMANHO_VETOR; i++){
        vetor[i] = rand() % 100;
    }

printf("Vetor aleatorio com %d (par) elementos: ", TAMANHO_VETOR);
for(int i = 0; i < TAMANHO_VETOR; i++){
    printf("%d ", vetor[i]);
    }
printf("\n");

printf("Vetor percorrido: ");
while(inicio < fim){
    printf("%d ", *inicio);
    printf("%d ", *fim);
    inicio++;
    fim--;
    }

printf("\n");
}
