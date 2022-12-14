#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of the number stored in the variable
 * Description: This program will assign a random number to the variable n each
 * time print the last digit of the number stored in the variable
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n, last;

	srand((unsigned int)time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, last);
	return (0);
}


