#include <stdio.h>

int main(void){
int tempoUsuario;
int hora, minuto, segundo;

printf("Digite a quantidade de segundos: ");
scanf("%d", &tempoUsuario);

segundo = tempoUsuario % 60;
minuto = (tempoUsuario / 60) % 60;
hora = tempoUsuario / 3600;

printf("%d : %d : %d\n", hora, minuto, segundo);

return 0;
}
