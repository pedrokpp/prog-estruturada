#include <stdio.h>
#include <stdlib.h>

float media(int n, float *v) {
  float soma = 0.0f;
  for (int i = 0; i < n; i++) {
    soma += v[i];
  }

  return soma / n;
}

int main(int argc, char *argv[]) {
  int n;
  printf("n: ");
  scanf("%d", &n);

  float *v = malloc(n * sizeof(float));

  for (int i = 0; i < n; i++) {
    printf("v[%d] = ", i);
    float input;
    scanf("%f", &input);

    v[i] = input;
  }

  printf("media: %.2f\n", media(n, v));

  return EXIT_SUCCESS;
}
