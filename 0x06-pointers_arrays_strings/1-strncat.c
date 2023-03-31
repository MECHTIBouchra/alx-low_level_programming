#include "main.h"

/**
  * *_strncat - concatenate up to n
  * @dest: char
  * @src: char
  * @n: int
  * Return: char
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[len])
		len++;
	while (src[i] && i < n)
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len + n + 1] = '\0';
	return (dest);
}
