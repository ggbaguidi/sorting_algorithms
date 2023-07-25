#include <stdio.h>
#include "sort.h"

/**
*swap_quick - the positions of two elements into an array
*@array: array
*@element1: array element
*@element2: array element
*
* Return: None
*/

void swap_quick(int *array, ssize_t element1, ssize_t element2)
{
	int tmp;

	tmp = array[element1];
	array[element1] = array[element2];
	array[element2] = tmp;
}


/**
 *lomuto_partition - lomuto partition sorting scheme implementation
 *@array: array
 *@first: first array element
 *@last: last array element
 *@size: size array
 *Return: return the position of the last element sorted
 */

int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size)
{
	int pivot = array[last];
	ssize_t current = first, finder;

	for (finder = first; finder < last; finder++)
	{
		if (array[finder] < pivot)
		{
			if (array[current] != array[finder])
			{
				swap_quick(array, current, finder);
				print_array(array, size);
			}
			current++;
		}
	}
	if (array[current] != array[last])
	{
		swap_quick(array, current, last);
		print_array(array, size);
	}
	return (current);
}


/**
 *__quick_sort - qucksort algorithm implementation
 *@array: array
 *@first: first array element
 *@last: last array element
 *@size: array size
 *
 * Return: None
 */

void __quick_sort(int *array, ssize_t first, ssize_t last, int size)
{
	ssize_t position = 0;


	if (first < last)
	{
		position = lomuto_partition(array, first, last, size);

		__quick_sort(array, first, position - 1, size);
		__quick_sort(array, position + 1, last, size);
	}
}


/**
 *quick_sort - the Quick sort algorithm
 *@array: array
 *@size: array size
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	__quick_sort(array, 0, size - 1, size);
}
