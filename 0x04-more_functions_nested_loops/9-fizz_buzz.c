#include <stdio.h>

/**
 * main - prints buzzeach number of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);
	for (i = 2; i <= 100; i++)

	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}
	return (0);
}
