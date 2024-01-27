#include "sort.h"

/**
 * partition - function that used tp partition the
 * array around povit
 * @arr: input array
 * @low: index for the first element
 * @high: index for the last element
 * @size: size of array
 *
 * Return: nothing
 */
void partition(int arr[], int low, int high, size_t size)
{
	int pivot, j, i;
	int temp;

	if (low < high)
	{
		pivot = high;
		j = low;
		for (i = low; i < high; i++)
		{
			if (arr[i] < arr[pivot])
			{
				if (i != j)
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
					print_array(arr, size);
				}
				j++;
			}
		}
		if (j != pivot && arr[j] != arr[pivot])
		{
			temp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = temp;
			print_array(arr, size);
		}
		partition(arr, low, j - 1, size);
		partition(arr, j + 1, high, size);
	}
}

/**
 * quick_sort -  function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: input array
 * @size: size of array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	partition(array, 0, size - 1, size);
}
