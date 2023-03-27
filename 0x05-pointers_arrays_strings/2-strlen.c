#include "main.h"

/**
  * _strlen - Get string length
  * @s: string
  * Return: int
  */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}

