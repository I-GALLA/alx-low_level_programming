#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array to operate on
 * @size: the size of the array
 * @action: a pointer to the function to execute on each element
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

