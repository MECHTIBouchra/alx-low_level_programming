#include "3-calc.h"

/**
  * main - Entry point
  * @argc: int
  * @argv: char*
  * Return: int
  */
int main(int argc, char *argv[])
{
	int a, b, r;
	char s;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	s = *argv[2];

	if ((s == '/' || s == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	r = func(a, b);
	printf("%d\n", r);
	return (0);
}
