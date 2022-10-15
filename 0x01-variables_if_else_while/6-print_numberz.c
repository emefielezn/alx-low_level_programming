#include <stdio.h>
/**
 * main - program that prints all single digit numbers of base 10
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}

