#include <stdio.h>
#include "sort.h"

/**
 * swap_select - swap two integers
 *
 * @a: a pointer int
 * @b: a pointer int
 *
 * Return: None
 */
void swap_select(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - the Selection sort algorithm
 *
 * @array: a int array
 * @size: a size of the array
 *
 * Return: None
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		size_t j_min = i;

		for (j = i + 1; j < size; j++)
			if (array[j] < array[j_min])
				j_min = j;

		if (j_min != i)
		{
			swap_select(&array[i], &array[j_min]);
			print_array(array, size);
		}
	}
}
