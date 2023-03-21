#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
unsigned long fibo1 = 0, fibo2 = 1, sum;

for (i = 0; i < 50; i++)
{
sum = fibo1 + fibo2;
printf("%lu", sum);

fibo1 = fibo2;
fibo2 = sum;

if (i == 49)
printf("\n");
else
printf(", ");
}

return (0);
}
