#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 3, j = 5;
	int *p, *q;
	p = &i;
	q = &j;

	printf("a) p == &i : %d\n", p == &i);
	printf("b) *p - *q : %d\n", *p - *q);
	printf("c) **&p : %d\n", **&p);
	printf("d) 3* - *p/(*q)+7 : %d\n", 3*-*p/(*q)+7);

	return EXIT_SUCCESS;
}
