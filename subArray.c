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