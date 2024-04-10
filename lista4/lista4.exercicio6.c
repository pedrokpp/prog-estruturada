#include <stdio.h>

#define MAX_CHARS 64

int valida_mail(char *s) {
	int i = 0;
	int prev_special = 0;

	do {
		char c = s[i];
		if (i == 0 && c >= '0' && c <= '9')
			return 0;

		if (c == '.' || c == '-' || c == '_') {
			if (i == 0 || (prev_special && c == '.'))
				return 0;

		}
		
		prev_special = c == '.';

	} while (++i < MAX_CHARS);

	return prev_special;
}

int main() {
	char s[MAX_CHARS];
	printf("nome: ");
	scanf("%s", s);

	printf("valida_mail: %d\n", valida_mail(s));
}
