#include <stdio.h>

#include <stdlib.h>
#include <time.h>

/**
 *main - prints The string Last digit of, followed by
 *n, followed by
 *the string is, followed by
 */

int main(void)
int main(l)
{
int n = 98;
int l = 0;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;

	if (l > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
}
	else if (l == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, l);
}
else if (l < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
}

	return (0);
}
