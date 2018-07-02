// Array with threshold value
// Given an array and a threshold value find the output
// input:
// {5,8,10,13,6,2}
// threshold = 3

// output:
// 17

// explanation:
// Number          parts               counts
// 5               {3,2}                 2
// 8               {3,3,2}               3
// 10              {3,3,3,1}             4
// 13              {3,3,3,3,1}           5
// 6               {3,3}                 2
// 2               {2}                   1

#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int array[size], position, count = 0, thresold;
    for (position = 0; position < size; scanf("%d", &array[position++]))
        ;
    scanf("%d", &thresold);
    for (position = 0; position < size; position++)
    {
        count += array[position] / thresold;
        if (array[position] % thresold)
            count += 1;
    }
    printf("%d", count);
}