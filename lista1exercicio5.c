#include <stdio.h>

float valor1(float a){
float b, c;

b = a / 2;
c = b + 3.1;

return c;
}

float valor2(int a){
int b;
float c;

b = a / 2;
c = b + 3.1;

return c;
}

int valor3(int a){
int b, c;

b = a / 2;
c = b + 3.1;

return c;
}

int main(void){
float a = 3;

printf("1. c = %.1f\n", valor1(a));
printf("2. c = %.1f\n", valor2(a));
printf("3. c = %d\n", valor3(a));

return 0;
}
