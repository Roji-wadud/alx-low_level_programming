#include "main.h"
int sqrt_fun(int n,int sq);
/**
 * _sqrt_recursion - squre of a number
 * @n:number
 *
 * Return: squreroot of agiven number
 */
int _sqrt_recursion(int n)
{

	int sqrt_fun(int n,int sq);

	int sq = 1;

	return (sqrt_fun(n, sq));
}

/* compare the given number to the square of various numbers recursively*/
int sqrt_fun(int n,int sq)
{  
	if (n == sq * sq)
	{
		/* Define base case */
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrt_fun(n, ++sq));
	}
	else
	{
		return (-1);
	}
