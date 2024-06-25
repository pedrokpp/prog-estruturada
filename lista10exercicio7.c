#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
  return (*(double *)a - *(double *)b);
}

int main() {
  FILE *inputFile, *outputFile;
  double number;
  double *numbers = NULL;
  int count = 0;

  inputFile = fopen("numeros.txt", "r");
  if (inputFile == NULL) {
    fprintf(stderr, "ERRO: abrir o arquivo numeros.txt\n");
    return 1;
  }

  while (fscanf(inputFile, "%lf", &number) == 1) {
    numbers = (double *)realloc(numbers, (count + 1) * sizeof(double));
    numbers[count++] = number;
  }

  fclose(inputFile);
  qsort(numbers, count, sizeof(double), compare);

  outputFile = fopen("numeros.bin", "wb");
  if (outputFile == NULL) {
    fprintf(stderr, "ERRO: abrir o arquivo numeros.bin\n");
    return 1;
  }

  char buffer[100];
  for (int i = 0; i < count; i++) {
    sprintf(buffer, "%.2lf\n", numbers[i]);
    fwrite(buffer, sizeof(char), strlen(buffer), outputFile);
  }

  fclose(outputFile);
  free(numbers);

  return 0;
}
