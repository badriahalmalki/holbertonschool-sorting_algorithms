#include "sort.h"

/**
 * quick_sort - Sorts an array of integers using the Quick sort algorithm
 * @array: Pointer to the array
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, size, 0, (int)size - 1);
}

/**
 * quick_sort_recursive - Recursive quick sort helper
 * @array: Pointer to the array
 * @size: Size of the array
 * @low: Starting index
 * @high: Ending index
 */
void quick_sort_recursive(int *array, size_t size, int low, int high)
{
	int p;

	if (low < high)
	{
		p = lomuto_partition(array, size, low, high);
		quick_sort_recursive(array, size, low, p - 1);
		quick_sort_recursive(array, size, p + 1, high);
	}
}

/**
 * lomuto_partition - Partitions array using Lomuto scheme
 * @array: Pointer to the array
 * @size: Size of the array
 * @low: Starting index
 * @high: Ending index
 *
 * Return: Final pivot position
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j && array[i] != array[j])
			{
				swap_ints(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}

	if (i != high && array[i] != array[high])
	{
		swap_ints(&array[i], &array[high]);
		print_array(array, size);
	}

	return (i);
}

/**
 * swap_ints - Swaps two integers
 * @a: First integer
 * @b: Second integer
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
