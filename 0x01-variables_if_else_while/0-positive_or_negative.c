#include <stdlib.h>
#include <time.h>
/* main - Determin if number is positive, negative, or zero.
 *
 * Return: 0 on success
 *
 *\
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	else if (n > 0)
		printf("%d is %s\n", n, "positive");
	else
		printf("%d is %d\n", n, "zero");
	return (0);
}
