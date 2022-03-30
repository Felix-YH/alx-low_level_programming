#include "main.h"

int _sqt_recursion(int n, int k);

/**
 * _sqrt_recursion - return thr natural square root of number
 * @n: number
 *
 * Return: Answer
 **/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqt_recursion(n, 0));

}

/**
 * _sqt_recursion - return natural number
 * @n: number
 * @k: iterator
 *
 * Return: nothing
 **/

int _sqt_recursion(int n, int k)
{
	if (k * k > n)
		return (-1);
	if (k * k == n)
		return (k);
	return (_sqt_recursion(n, k + 1));

}
