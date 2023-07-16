#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit of a randonmly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always (0) 
 */
int main(void)
{
	int n;
	int %d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n");

}
