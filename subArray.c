// Print all the subarrays of the given array
// Input:
// 1 2 3
// Output:
// 1
// 1 2
// 1 2 3
// 2 
// 2 3
// 3 

#include <stdio.h>
int main()
{
    int array[10], input, cursor, group, subArray, size;
    scanf("%d", &size);
    for (input = 0; input < size; scanf("%d", &array[input++]))
        ;
    for (cursor = 0; cursor < size; cursor++)
        for (group = cursor + 1; group <= size; printf("\n"), group++)
            for (subArray = cursor; subArray < group; printf("%d ", array[subArray++]))
                ;
}