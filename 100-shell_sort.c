#include "sort.h"
/**
 * shell_sort -  function that sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence
 * @array: array
 * @size: size of array
 * Retur: void
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, l, n;

	if (array == NULL || size < 2)
		return;

	for (l = 1; l < (size / 3);)
		l = l * 3 + 1;
	for (; l >= 1; l /= 3)
	{
		for (i = l; i < size; i++)
		{
			for (j = i; (j >= l) && array[j - l] > array[j]; j -= l)
			{
				n = array[j];
				array[j] = array[j - l];
				array[j - l] = n;
			}
		}
		print_array(array, size);
	}
}
