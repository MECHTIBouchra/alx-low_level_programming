#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char str[9] = "_putchar";
int i = 0;
while ("_putchar"[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
return (0);
}
