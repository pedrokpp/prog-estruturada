#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int divs(int n, int *min, int *max) {
  if (n == 1)
    return 0;

  int primo = 1;

  for (int i = 2; i <= n; i++) {
    if (i == n || n % i != 0)
      continue;

    primo = 0;

    if (i < *min)
      *min = i;

    if (i > *max)
      *max = i;
  }

  return primo;
}

int main(int argc, char *argv[]) {
  int n, max = INT_MIN, min = INT_MAX;

  printf("n: ");
  scanf("%d", &n);

  int primo = divs(n, &min, &max);

  printf("%d é primo? %d\n", n, primo);

  if (!primo)
    printf("max: %d, min: %d\n", max, min);

  return EXIT_SUCCESS;
}
