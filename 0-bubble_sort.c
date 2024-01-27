#include "sort.h"

/**
 * swap - swap function
 * @xp: The Position Of Previous Element
 * @yp: The Position Of Current Element
 *
 * Return: void
 */

void swap(int *x, int *y)
{
	size_t tmp = *x;
	*x = *y;
	*y = tmp;
}
/**
 * bubble_sort - sorting array using bubble algorithm
 * @array: The Array
 * @size: size of array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapped = true;
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
		if (swapped == false)
			break;
	}
}
