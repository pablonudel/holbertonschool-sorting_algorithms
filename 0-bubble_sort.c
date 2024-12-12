#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: array of integers to be sorted
 * @size: length of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k, temp;

	if (!array || !size)
		return;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				for (k = 0; k < size; k++)
				{
					printf("%d", array[k]);
					if (k != size - 1)
						printf(", ");

				}
				printf("\n");
			}
		}
	}
}
