#include <stdio.h>
#include <stdlib.h>

int maiores(int n, int *vet, int x) {
  int maiores = 0;
  for (int i = 0; i < n; i++) {
    if (vet[i] > x)
      maiores++;
  }

  return maiores;
}

int main(int argc, char *argv[]) {

  int n, x;

  printf("n: ");
  scanf("%d", &n);

  printf("x: ");
  scanf("%d", &x);

  int *vet = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    printf("vet[%d] = ", i);
    int input;
    scanf("%d", &input);
    vet[i] = input;
  }

  printf("maiores: %d\n", maiores(n, vet, x));

  return EXIT_SUCCESS;
}
