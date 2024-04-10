#include <stdio.h>

void calcula_corrida(float dist, float *b1, float *b2 ){
	*b1 = 4.95 + (2.5 * dist);
	*b2 = 4.95 + (3.0 * dist);
}

int main() {
	float dist, b1, b2;

	printf("dist = ");
	scanf("%f", &dist);

	calcula_corrida(dist, &b1, &b2);

	printf("na b1: R$%.2f\n", b1);
	printf("na b2: R$%.2f\n", b2);

}
