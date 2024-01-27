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
	size_t i, j, minIDX;

	for (i = 0; i < size - 1; i++)
	{
		minIDX = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIDX])
				minIDX = j;
		}
		if (minIDX != i)
		{
			swap(&array[minIDX], &array[i]);
			print_array(array, size);
		}
	}
}
