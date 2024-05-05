#include <stdio.h>

float main(void){
float a, b, result;
char operador;

printf("Digite qual operacao deseja realizar (+, -, / ou *): ");
scanf("%c", &operador);

printf("Digite o primeiro numero real: ");
scanf("%f", &a);

printf("Digite o segundo numero real: ");
scanf("%f", &b);

if(operador == '+')
    result = a + b;
if(operador == '-')
    result = a - b;
if(operador == '/')
    result = a / b;
if(operador == '*')
    result = a * b;

printf("\nResultado: %.2f\n", result);

return 0;
}
