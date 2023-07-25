#include <stdio.h>
#include "sort.h"

/**
 * swap_shell - swap
 *
 * @a: ...
 * @b: ...
 *
 * Return: None
 */

void swap_shell(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort -  the Shell sort algorithm
 *
 * @array: a array of integers
 * @size: a size of array
 *
 * Return: None
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, index = 0;

	if (array == NULL || size < 2)
		return;
	while (gap < size / 3)
		gap = 3 * gap + 1;
	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
			for (index = i; index >= gap &&
			 (array[index] < array[index - gap]); index -= gap)
				swap_shell(&array[index], &array[index - gap]);
		print_array(array, size);
		gap /= 3;
	}
}
