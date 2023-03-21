#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: integer to be checked.
 * @last_digit: last digit of the number
 *
 * Return: the absolute value of an integer.
 */

int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
{
last_digit *= -1;
}
_putchar(last_digit + '0');
return (last_digit);
}
