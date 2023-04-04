#include "main.h"
#include "stdio.h"
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				return (&(s[a]));
		}
	}
	return (0);
}
