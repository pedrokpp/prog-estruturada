#include <stdio.h>
#include <math.h>

void calculaRaizes(double a, double b, double c){
double x1, x2;
double delta = b * b - 4 * a * c;

if(delta > 0){
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("As raizes da equacao sao: %.2f e %.2f\n", x1, x2);
}
if(delta == 0){
    x1 = -b / (2 * a);
    printf("A equacao possui uma raiz real: %.2f\n", x1);
}
if(delta < 0)
    printf("A equacao nao possui raizes reais.\n");

}

int main(void){
double a, b, c;

printf("Digite os coeficientes da equacao (a, b, c): ");
scanf("%lf %lf %lf", &a, &b, &c);

calculaRaizes(a, b, c);

return 0;
}
