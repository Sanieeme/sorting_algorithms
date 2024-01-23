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
	int s;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		s = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				n = array[j];
				array[j] = array[j + 1];
				array[j + 1] = n;
				s++;
				print_array(array, size);
			}
		}
		if (s == 0)
			return;
	}
}
