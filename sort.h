#ifndef SORT_H
#define SORT_H

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void swap(int *a, int *b);
void swap_select(int *a, int *b);
void swap_shell(int *a, int *b);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size);
void swap_quick(int *array, ssize_t item1, ssize_t item2);
void __quick_sort(int *array, ssize_t first, ssize_t last, int size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

#endif
