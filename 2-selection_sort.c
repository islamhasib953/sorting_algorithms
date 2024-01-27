#include "sort.h"
/**
 * swap - Function That Swapped Array Element
 * @xp: First Position
 * @yp: Second Position
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
 * selection_sort - Implement Funtion That Create Selection Sort Alogrithm
 * @array: The Array To Sorted
 * @size: The Size Of An Array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{

	for (int i = 0; i < size - 1; i++)
	{
		int mn = i;
		for (int j = i + 1; j < size; j++)
		{
			if (array[j] < array[mn])
				mn = j;
		}
		if (mn != i)
		{
			swap(&array[mn], &array[i]);
			print_array(array, size);
		}
	}
}
