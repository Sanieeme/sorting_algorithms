#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: parameter
 * @size: parameter
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, n;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				n = array[j];
				array[j] = array[j + 1];
				array[j + 1] = n;
				print_array(array, size);
			}
		}
	}
}
