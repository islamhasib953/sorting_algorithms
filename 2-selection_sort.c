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
 * selection_sort - sorting array using selection algorithm
 * @array: The Array
 * @size: size of array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                swap(&array[i], &array[j]);
                print_array(array, size);
            }
        }
    }
}
