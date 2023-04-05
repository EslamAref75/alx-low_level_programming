#include "main.h"

/**
 * checker - checkes to see if the input integer is prime
 * @a:int
 * @b:int
 * Return:checked integer
 */
int checker(int a, int b)
{
if (b < 2 || b % a == 0)
return (0);
else if (a > b / 2)
return (1);
else
return (checker(a + 1, b));
}

/**
 * is_prime_number -  returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n:int
 * Return: prime number
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (checker(2, n));
}
