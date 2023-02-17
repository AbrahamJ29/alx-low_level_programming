#include <stdio.h>

#include <stdlib.h>
#include <time.h>

/**
 *main - prints The string Last digit of, followed by
 *n, followed by
 *the string is, followed by
 */

int main(void)

{
        int n = 98
        ;srand(time(0));
        n = rand() - RAND_MAX / 2;
	if (n > 5)
        {
	printf("Last digit of 980 is 0 and is 0\n");
        }
        else if (n == 0)
        {
	printf("Last digit 98 is 0 and is 0\n");
        }
	else if (n < 6)
        {
	printf("Last digit of -98 is -8 and is less than 6 and not 0\n");
        }

	return 0;
}
