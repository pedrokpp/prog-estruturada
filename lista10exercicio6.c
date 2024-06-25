#include <stdio.h>

int main() {
  char filename[20];
  char content[50];
  FILE *file;

  for (int i = 1; i <= 10; i++) {
    snprintf(filename, sizeof(filename), "teste%02d.txt", i);
    snprintf(content, sizeof(content), "Texto do arquivo %02d", i);

    file = fopen(filename, "w");
    if (file == NULL) {
      fprintf(stderr, "ERRO: criar o arquivo %s\n", filename);
      return 1;
    }

    fprintf(file, "%s\n", content);
    fclose(file);
  }

  return 0;
}
