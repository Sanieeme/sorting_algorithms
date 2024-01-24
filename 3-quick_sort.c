#include "sort.h"

int partition(int *array, size_t size, int l, int h);
void sort(int *array, size_t size, int l, int h);
void swap(int *a, int *b);

/**
 * quick_sort - implements lotumo partition
 * @array: array of integers
 * @size: number of elements in array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sort(array, size, 0, size - 1);
}

/**
 * swap - swap values of two pointers
 * @a: integer
 * @b: integer pointer
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

/**
 * partition - finds the final position of the pivot in a sorted array
 * @array: array of integers
 * @size: size of array
 * @l: index of the lower integer
 * @h: index of the higher integer
 * Return: void
 */
int partition(int *array, size_t size, int l, int h)
{
	int i;         /* counter */
	int p;         /* pivot element index */
	int firsthigh;  /* divider position for pivot element */

	p = h;
	firsthigh = l;
	for (i = l; i < h; i++)
	{
		if (array[i] < array[p])
		{
			swap(&array[i], &array[firsthigh]);
			if (i != firsthigh)
				print_array(array, size);
			firsthigh++;
		}
	}
	swap(&array[p], &array[firsthigh]);
	if (p != firsthigh)
		print_array(array, size);
	return (firsthigh);
}

/**
 * sort - sorts an array using quicksort algorithm
 * @array: array of integers
 * @size: size of array
 * @l: index of the lower integer
 * @h: index of the higher integer
 * Return: void
 */
void sort(int *array, size_t size, int l, int h)
{
	int p; /* pivot index */

	if ((h - l) > 0)
	{
		p = partition(array, size, l, h);
		sort(array, size, l, p - 1);
		sort(array, size, p + 1, h);
	}
}
