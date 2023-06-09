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
long int n, maxPrime;

n = 612852475143;
maxPrime = -1;

while (n % 2 == 0)
{
maxPrime = 2;
n = n / 2;
}

for (i = 3; i <= sqrt(n); i = i + 2)
{

while (n % i == 0)
{
maxPrime = i;
n = n / i;
}
}

if (n > 2)
{
maxPrime = n;
printf("%ld\n", maxPrime);
}
return (0);
}
