#include "sort.h"
/**
 * partition - finds the pivot index
 *
 * @array: array of integers to be sorted
 * @low: low index
 * @high: high index
 * @size: length of the array
 *
 * Return: index of the pivot
 */
size_t partition(int *array, size_t low, size_t high, size_t size)
{
	size_t i = low, j;
	int temp;

	for (j = low; j < high; j++)
	{
		if (array[j] <= array[high])
		{
			if (i != j)
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
			i++;
		}
	}

	if (i != high)
	{
		temp = array[i];
		array[i] = array[high];
		array[high] = temp;
		print_array(array, size);
	}

	return (i);
}
/**
 * partition_sort - sort the partition
 *
 * @array: array of integers to be sorted
 * @low: low index
 * @high: high index
 * @size: length of the array
 *
 * Return: void
 */
void partition_sort(int *array, size_t low, size_t high, size_t size)
{
	size_t pivot;

	if (!array || low >= high)
		return;

	pivot = partition(array, low, high, size);

	if (pivot > 0)
		partition_sort(array, low, pivot - 1, size);

	partition_sort(array, pivot + 1, high, size);
}
/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 *
 * @array: array of integers to be sorted
 * @size: length of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size == 0)
		return;

	partition_sort(array, 0, size - 1, size);
}
