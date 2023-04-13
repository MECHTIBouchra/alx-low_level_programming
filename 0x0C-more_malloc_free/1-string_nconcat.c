#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strlen - Get string length
  * @str: char*
  * Return: int
  */
int _strlen(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
;
return (i);
}

/**
  * string_nconcat - Concatenate two strings
  * @s1: char*
  * @s2: char*
  * @n: unsigned int
  * Return: char*
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
int j, k, num, len;
num = n;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (num < 0)
return (NULL);
if (num >= _strlen(s2))
num = _strlen(s2);
len = _strlen(s1) + num + 1;
str = malloc(sizeof(char) * len);
if (str == NULL)
return (NULL);
for (k = 0; s1[k] != '\0'; k++)
str[k] = s1[k];
for (j = 0; j < num; j++)
str[k + j] = s2[j];
str[k + j] = '\0';
return (str);
}
