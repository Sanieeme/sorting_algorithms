#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: pararmeter
 * @size: size
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k, n;

	for (i = 0; i < size - 1; i++)
	{
		j = i;
		for (k = i + 1; k < size; k++)
		{
			if (array[k] < array[j])
				j = k;
		}
		if (j != i)
		{
			n = array[j];
			array[j] = array[i];
			array[i] = n;
			print_array(array, size);
		}
	}
}
