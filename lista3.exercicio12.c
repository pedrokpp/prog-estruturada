#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {

  char frase[80];

  for (int i = 0; i < 80; i++) {
    char c = getch();
    printf("%c\n", c);
    frase[i] = c;
    if (c == '\r')
      break;
  }

  for (int i = 0; i < 80; i++) {
    char current_char = frase[i];
    if (current_char == '\r') {
      printf("\n");
      break;
    }

    if (current_char == ' ')
      printf("\n");
    else
      printf("%c", current_char);
  }

  return EXIT_SUCCESS;
}
