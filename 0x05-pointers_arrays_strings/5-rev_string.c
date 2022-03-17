#include "main.h"

/**
 * reverse_string - print reverse characters
 * @a: validate the character
 * Return: Always 0
 */
void reverse_string(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
