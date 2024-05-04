#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  int a = 1, b = 2, c = 3, d = 4;
  float e = 5.0f, f = 6.0f, g = 7.0f, h = 8.0f;
  char vet[10] = "ola mundo!";
  int x;
  int *ptr = &a;

  for (int i = 1; i < 20; i++) {
    printf("endereco: %p, valor: %d\n", ptr, *ptr);
    if (ptr == &a)
      printf("endereco igual a 'a'\n");
    if (ptr == &b)
      printf("endereco igual a 'b'\n");
    if (ptr == &c)
      printf("endereco igual a 'c'\n");
    if (ptr == &d)
      printf("endereco igual a 'd'\n");
    if (ptr == &e)
      printf("endereco igual a 'e'\n");
    if (ptr == &f)
      printf("endereco igual a 'f'\n");
    if (ptr == &g)
      printf("endereco igual a 'g'\n");
    if (ptr == &h)
      printf("endereco igual a 'h'\n");
    if (ptr >= &vet[0] && ptr <= &vet[9])
      printf("endereco esta em vet: %c\n", *ptr);
    ptr++;
  }

  return EXIT_SUCCESS;
}
