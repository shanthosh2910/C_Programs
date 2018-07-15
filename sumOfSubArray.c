#include <stdio.h>
int main()
{
    int array[10], input, cursor, group, subArray, size, sum = 0;
    scanf("%d", &size);
    for (input = 0; input < size; scanf("%d", &array[input++]))
        ;
    for (cursor = 0; cursor < size; cursor++)
        for (group = cursor + 1; group <= size; printf("%d\n", sum), group++, sum = 0)
            for (subArray = cursor; subArray < group; sum += array[subArray++])
                ;
}