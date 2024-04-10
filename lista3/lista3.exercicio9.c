#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int pulo[4] = {0, 1, 2, 3};

  printf("*(pulo + 2) == pulo[2] :: %d == %d\n", *(pulo + 2), pulo[2]);

  return EXIT_SUCCESS;
}
