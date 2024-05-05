#include <stdio.h>
#include <math.h>

int main(void){
float numero;

printf("Digite o numero float desejado: ");
scanf("%f", &numero);

printf("\nArredondado para cima: %.2f\n", ceil(numero));
printf("Arredondado para baixo: %.2f\n", floor(numero));

return 0;
}
