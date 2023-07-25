#include <stdio.h>
#include "sort.h"


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
	int tmp;
	size_t i, j, inc;

	for (inc = size / 2; inc > 0; inc /= 2)
	{
		for (i = inc; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= inc; j -= inc)
			{
				if (tmp < array[j - inc])
					array[j] = array[j - inc];
				else
					break;
			}
			array[j] = tmp;
		}
		print_array(array, size);
	}
}
