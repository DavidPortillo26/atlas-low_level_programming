#include "search_algos.h"

/**
 * binary_search - search the first and last occurrence of a value in the array
 * @array: set of numbers
 * @size: size of the array
 * @value: value to search
 * Return: return the first index located otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
    size_t l = 0, r = size - 1, mid;
    int first_occurrence = -1;

    if (array == NULL)
        return (-1);

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (array[mid] == value)
        {
            first_occurrence = mid;
            r = mid - 1; /* Search for the last occurrence in the left half */
        }
        else if (array[mid] < value)
            l = mid + 1;
        else
            r = mid - 1;
    }

    /* If the value was found, find the last occurrence */
    if (first_occurrence != -1)
    {
        l = 0;
        r = first_occurrence;
        while (l <= r)
        {
            mid = l + (r - l) / 2;

            if (array[mid] == value)
                r = mid - 1; /* Search for the last occurrence in the left half */
            else
                l = mid + 1;
        }

        /* The last occurrence is at r + 1 */
        return r + 1;
    }

    return (-1);
}
