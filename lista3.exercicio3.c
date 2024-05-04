#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
	int i = 5, *p;
	p = &i;
	printf("%x %d %d\n", p, *p+2, 3**p);

	return EXIT_SUCCESS;
}
