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
	size_t i, n = size;
	int swapped;

	do {
		swapped = 0;
		for (i = 1; i < n; i++)
			if (array[i - 1] > array[i])
			{
				swap(&array[i - 1], &array[i]);
				print_array(array, size);
				swapped = 1;
			}
		n--;
	} while (swapped);
}
