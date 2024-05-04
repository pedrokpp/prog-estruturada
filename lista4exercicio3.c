#include <stdio.h>

int main()
{
int numbers[5];
int *p;
int i;

p = numbers;
*p = 10;
p++;
*p = 20;
p = &numbers[2];
*p = 30;
p = numbers + 3;
*p = 40;
p = numbers;
*(p + 4) = 50;

for (i = 0; i < 5; i++)
printf("%d ", numbers[i]);
}
