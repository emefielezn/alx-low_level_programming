#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings using at
 * most an inputted number of bytes.
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes of s2 to concatenate to s1
 *
 * Return: If the function fails - NULL
 * Otherwise - a pointer to the concatenated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;
	
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (len1 = 0, ptr = s1; *ptr; ptr++)
		len1++;
	for (len2 = 0, ptr = s2; *ptr; ptr++)
		len2++;
	if (n > len2)
		n = len2;
	ret = malloc((len1 + n + 1) * sizeof(char));
	if (!ret)
		return (0);
	ptr = ret;
	while (*s1)
		*ptr++ = *s1++;
	i = 0;
	while (i < n)
	{
		*ptr++ = s2[i++];
	}
	*ptr = 0;
	return (ret);
}
