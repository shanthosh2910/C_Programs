// Given an array of integers of size n​. Convert the array in such a way that if next valid number
// is same as current number, double its value and replace the next number with 0. After the
// modification, rearrange the array such that all 0’s are shifted to the end.

#include <stdio.h>
int main()
{
    int array[] = {0, 2, 2, 2, 0, 6, 6, 0, 0, 8}, size, iterate, zero = 0;
    size = sizeof(array) / sizeof(array[0]);

    for (iterate = 0; iterate < size - 1; iterate++)
    {
        if (array[iterate] == array[iterate + 1])
        {
            array[iterate] = 2 * array[iterate];
            array[iterate + 1] = 0;
            iterate++;
        }
    }

    for (iterate = 0; iterate < size; iterate++)
    {
        if (array[iterate] != 0)
            array[zero++] = array[iterate];
    }

    while (zero < size)
        array[zero++] = 0;

    for (iterate = 0; iterate < size; printf("%d ", iterate[array]), iterate++)
        ;
}