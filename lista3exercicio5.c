#include <stdio.h>
#include <stdlib.h>

float max_vet(int n, float *vet) {
  float max = 0.0f;

  for (int i = 0; i < n; i++) {
    if (vet[i] > max)
      max = vet[i];
  }

  return max;
}

int main(int argc, char *argv[]) {
  int n;

  printf("n: ");
  scanf("%d", &n);

  float *vet = malloc(n * sizeof(float));

  for (int i = 0; i < n; i++) {
    float input;
    printf("vet[%d] = ", i);
    scanf("%f", &input);
    vet[i] = input;
  }

  printf("max_vet = %.2f\n", max_vet(n, vet));

  return EXIT_SUCCESS;
}
