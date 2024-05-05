#include <stdio.h>

float main(void){
float hora;
float valor_hora;
float salario;
float bonus;

printf("Horas trabalhadas na semana: ");
scanf("%f", &hora);
printf("Valor da hora: ");
scanf("%f", &valor_hora);

if(hora <= 40){
    salario = (valor_hora * hora);
    printf("Salario da semana: R$%.2f\n", salario);
}

if(hora > 40 && hora <= 60){
    bonus = ((hora - 40) * valor_hora) * 0.5;
    salario =  valor_hora * hora + bonus;
    printf("Salario da semana: R$%.2f\n", salario);
}

if(hora > 60){
    bonus = ((hora - 60) * valor_hora) + (20 * (valor_hora * 0.5));
    salario = valor_hora * hora + bonus;
    printf("Salario da semana: R$%.2f\n", salario);
}

}
