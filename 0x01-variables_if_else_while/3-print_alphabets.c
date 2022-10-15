#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i;
	int j;

	i = 97;
	j = 65;
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 122; j++)
	{
		putchar(j);
	}
	putchar(10);
	return (0);
}
