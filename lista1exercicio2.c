#include <stdio.h>

int main(void){
int valores[3];
int maiorValor, menorValor, i;
int soma = 0;
float media;

for(i = 0; i < 3; i++){
    printf("Digite o %do valor (0 - 1000): ", (i + 1));
    scanf("%d", &valores[i]);
    soma += valores[i];
    if(i == 0){
        maiorValor = valores[i];
        menorValor = valores[i];
    } else {
        if(valores[i] > maiorValor)
                maiorValor = valores[i];
        if(valores[i] < menorValor)
                menorValor = valores[i];
        }
    }
media = soma / 3.0;

printf("\nMaior valor: %d\nMenor valor: %d\nMedia: %.2f\n", maiorValor, menorValor, media);

printf("Valores pares: ");
for(i = 0; i < 3; i++){
    if((valores[i] % 2) == 0)
        printf("%d ", valores[i]);
}
printf("\n");

return 0;
}
