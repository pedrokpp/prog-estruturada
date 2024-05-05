#include <stdio.h>

int main(void){

int numero = 1000;
int num1;
int num2;
int soma;

while(numero < 10000){
    num1 = (numero / 100);
    num2 = (numero % 100);
    soma = num1 + num2;
    if((soma * soma) == numero)
        printf("%d\n", numero);
    numero += 1;
}
}
