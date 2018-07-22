// Find the frequency of all numbers in an array.
// Note: use dynamic memory allocation.
// For example, if the input is {1, 2, 45, 67, 1, 88}, do not calculate the frequency of all elements from 1 to 88.
// Input:
// 5
// 1 1 2 3 1
// Output:
// 1 3
// 2 1
// 3 1

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *array = NULL, *count = NULL, size, element, repeated;
    scanf("%d", &size);
    array = (int *)malloc(size * sizeof(int));
    count = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
        count[i] = 1;
    }
    for (element = 0; element < size; element++)
    {
        for (repeated = element + 1; repeated < size; repeated++)
        {
            if (array[repeated] && array[element] && array[element] == array[repeated])
            {
                count[element]++;
                array[repeated] = 0;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i])
            printf("%d %d\n", array[i], count[i]);
    }
}