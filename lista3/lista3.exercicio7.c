#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  int *pti;
  int veti[] = {10, 7, 2, 6, 3};
  pti = veti;

  printf("a. *pti é igual a 10 (%s)\n", *pti == 10 ? "V" : "F");
  printf("b. *(pti+2) é igual a 2 (%s)\n", *(pti + 2) == 2 ? "V" : "F");
  printf("c. pti[4] é igual a 3 (%s)\n", pti[4] == 3 ? "V" : "F");
  printf("d. pti[1] é igual a 10 (%s)\n", pti[1] == 10 ? "V" : "F");
  printf("e. *(veti+3) é igual a 6 (%s)\n", *(veti + 3) == 6 ? "V" : "F");

  return EXIT_SUCCESS;
}
