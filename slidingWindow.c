// Given an array of numbers and a window of size k. Print the maximum of numbers inside the window for each step as the window moves from the beginning of the array.
// input:
// 10
// 1 2 3 4 5 6 7 8 9 10
// 3
// output:
// 3 4 5 6 8 9 10

#include <stdio.h>
int main()
{
    int size, window, position, maximum, value;
    scanf("%d", &size);
    int array[size];
    for (position = 0; position < size; scanf("%d", &array[position++]))
        ;
    scanf("%d", &window);
    for (position = 0; position <= size - window; position++, printf("%d ", maximum))
    {
        maximum = array[position];
        for (value = position; value < window + position; value++)
        {
            if (maximum < array[value])
                maximum = array[value];
        }
    }
}