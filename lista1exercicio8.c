#include <stdio.h>

int total_de_notas(int valor){
int nota100, nota50, nota20, nota10, nota5, nota2, nota1;

nota100 = valor / 100;
valor = valor % 100;
nota50 = valor / 50;
valor = valor % 50;
nota20 = valor / 20;
valor = valor % 20;
nota10 = valor / 10;
valor = valor % 10;
nota5 = valor / 5;
valor = valor % 5;
nota2 = valor / 2;
nota1 = valor % 2;

if(nota100 > 0)
    printf("%d cedulas de R$ 100\n", nota100);
if(nota50 > 0)
    printf("%d cedula de R$ 50\n", nota50);
if(nota20 > 0)
    printf("%d cedulas de R$ 20\n", nota20);
if(nota10 > 0)
    printf("%d cedula de R$ 10\n", nota10);
if(nota5 > 0)
    printf("%d cedula de R$ 5\n", nota5);
if(nota2 > 0)
    printf("%d cedulas de R$ 2\n", nota2);
if(nota1 > 0)
    printf("%d cedula de R$ 1\n", nota1);
}

int main(void){
int valor;

printf("Digite o valor inteiro em reais: R$ ");
scanf("%d", &valor);
printf("\n");

total_de_notas(valor);

return 0;
}
