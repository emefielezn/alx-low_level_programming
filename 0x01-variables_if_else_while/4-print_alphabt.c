#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);
	return (0);
}

