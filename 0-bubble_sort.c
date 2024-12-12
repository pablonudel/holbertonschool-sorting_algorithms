#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k, temp;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
		if (array[i - 1] > array[i])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				for(k = 0; k < size; k++)
				{
					printf("%d",array[k]);
					if (k != size - 1)
						printf(", ");

				}
				printf("\n");
			}
		}
	}
}
