#include <stdio.h>
#include "sort.h"

/**
 * swap - swape to integer
 *
 * @a: apointer to int
 * @b: a pointer to int
 *
 * Return: None
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - the Bubble sort algorithm
 *
 * @array: a int array
 * @size: a size of array
 *
 * Return: None
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, j;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1] && array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
}
