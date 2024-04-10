#include "search_algos.h"

/**
 * linear_search - search the first occurrence of a value in the array
 * @array: set of numbers
 * @size: size of the array
 * @value: value to search
 * Return: return the first index located
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);
    for (i = 0; i < size; i++)
    {
        if (array[i] == value)
            return (i);
    }
    return (-1);
}