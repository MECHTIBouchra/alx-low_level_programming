#include "main.h"
#include <stdio.h>
void print_diagsums(int *a, int size)
{
int s;
int diagonal1 = 0;
int diagonal2 = 0;

for (s = 0; s < size; s++)
diagonal1 = diagonal1 + a[(size + 1) * s];
for (s = 1; s < size + 1; s++)
diagonal2 = diagonal2 + a[(size - 1) * s];
printf("%d, %d\n", diagonal1, diagonal2);
}

