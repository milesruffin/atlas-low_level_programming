#include "main.h"


/**
 * add - entry point
 *
 *Description: function that adds two integers and
 * returns the result.
 *
 * @n1: integer on
 * @n2: integer two
 *
 * Return:sum.
 *
 */


int add(int n1, int n2)
{
	int sum;


	sum = n1 + n2;
	return (sum);
}




10-main.c
#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;


	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
