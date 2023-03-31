#include "main.h"

/**
  * *_strcat - concatenate two strings
  * @dest: char
  * @src: char
  * Return: char
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

