#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers ordered
 * from min to max, inclusive
 * @min: The first value of the array
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL
 * Otherwise - a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;
	
	if (min > max)
		return (NULL);
	for (len = 0; len < (max - min); len++);
	arr = malloc(sizeof(int) * (len + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
