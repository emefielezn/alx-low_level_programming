#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n element of array
 * @a: array
 * @n: number of elements
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		printf("%d", a[inc]);
		if (inc == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
