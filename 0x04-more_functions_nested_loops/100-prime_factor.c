#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
long int n;

n = 612852475143;


for (i = 3; i <= sqrt(n); i = i + 2)
{

while (n % i == 0)
{

n = n / i;
}
}

if (n > 2)

printf("%ld ", n);

return (0);
}
