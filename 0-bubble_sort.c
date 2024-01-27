#include "sort.h"

/**
 * swap - swap function
 * @x: The Position Of Previous Element
 * @y: The Position Of Current Element
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
    for (int i =0; i< size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                print_array(array, size);
            }
        }
    }
}
