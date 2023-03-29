#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: char to be concatenated
 * @src:char to be concatenated
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *s = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (s);
}
