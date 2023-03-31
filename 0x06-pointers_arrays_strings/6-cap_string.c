#include "main.h"

/**
  * cap_string - capitalize string
  * @str: char
  * Return: char
  */
char *cap_string(char *str)
{
	int a = 0, i;
	int y = 13;
	char sep[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[a])
	{
		i = 0;

		while (i < y)
		{
			if ((a == 0 || str[a - 1] == sep[i]) && (str[a] >= 97 && str[a] <= 122))
				str[a] -= 32;

			i++;
	}

	a++;
	}
	return (str);
}
