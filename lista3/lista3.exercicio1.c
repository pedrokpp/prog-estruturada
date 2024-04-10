#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265

void calcula_circulo(float r, float* circunferencia, float* area) {
	*circunferencia = 2 * PI * r;
	*area = PI * r * r;
}

int main(int argc, char *argv[])
{
	printf("raio: ");
	float r, circunferencia, area;
	scanf("%f", &r);

	calcula_circulo(r, &circunferencia, &area);

	printf("circ: %.2f, area: %.2f\n", circunferencia, area);

	return EXIT_SUCCESS;
}
