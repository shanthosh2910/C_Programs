// print the second smallest in an array

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[] = {89, 34, 45, 11, 33, -10, 44, 77, 88, 17, 90, 48, 6, 3, -10, -10};
    int small, second_small, size, ind;
    small = second_small = INT_MAX;
    size = sizeof(arr) / sizeof(arr[0]);
    for (ind = 0; ind < size; ind++)
    {
        if (arr[ind] < small)
        {
            second_small = small;
            small = arr[ind];
        }
        else if (arr[ind] < second_small && arr[ind] != small)
        {
            second_small = arr[ind];
        }
    }
    printf("%d", second_small);
}
