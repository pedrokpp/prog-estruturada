#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *file;
  char filename[100];
  int count = 0;
  double num, sum = 0.0;
  double *numbers = NULL;

  printf("nome arquivo: ");
  scanf("%s", filename);

  file = fopen(filename, "r");
  if (file == NULL) {
    printf("ERRO: abrir o arquivo %s\n", filename);
    return 1;
  }

  while (fscanf(file, "%lf", &num) == 1) {
    count++;
    numbers = (double *)realloc(numbers, count * sizeof(double));
    if (numbers == NULL) {
      printf("ERRO: alocação de memória\n");
      fclose(file);
      return 1;
    }
    numbers[count - 1] = num;
    sum += num;
  }

  if (count > 0) {
    double average = sum / count;
    printf("media: %.2lf\n", average);
  } else {
    printf("nenhum float lido\n");
  }

  free(numbers);
  fclose(file);

  return 0;
}
