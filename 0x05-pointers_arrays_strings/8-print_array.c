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
	int inr;

	for (inc = 0; inc < n ; inc++)
	{
		printf("%d", *(a + i));
		if (inc != n - 1)
			printf(", ");
	}
	printf("\n");
}
