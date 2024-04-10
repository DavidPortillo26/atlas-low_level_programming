#include "search_algos.h"

/**
 * binary_search - search the first occurrence of a value in the array
 * @array: set of numbers
 * @size: size of the array
 * @value: value to search
 * Return: return the first index located otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
    size_t l = 0, r = size - 1;
    int mid;

    if (array == NULL)
        return (-1);

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return (-1);
}
