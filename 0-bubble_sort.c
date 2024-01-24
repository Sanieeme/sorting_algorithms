#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the bubble sort algorithm
 * @array: array of integers to sort
 * @size: size of an array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swaps, temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		swaps = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swaps = 1;
				print_array(array, size);
			}
		}
		if (swaps == 0)
			return;
	}
}
