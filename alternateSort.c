// Alternate sort in unsorted array
// ( no extra space)
// Input:
// 9
// 23 7 8 30 18 12 6 28 16
// Output:
// 23 7 18 12 16 28 8 30 6 


#include <stdio.h>

int main()
{
    int size, position, value, temp;
    scanf("%d", &size);
    int array[size];
    for (position = 0; position < size; scanf("%d", &array[position++]))
        ;
    for (position = 0; position < size; position += 2)
    {
        for (value = 0; value < size; value += 2)
        {
            if (array[position] > array[value])
            {
                temp = array[position];
                array[position] = array[value];
                array[value] = temp;
            }
        }
    }
    for (position = 1; position < size; position += 2)
    {
        for (value = 1; value < size; value += 2)
        {
            if (array[position] < array[value])
            {
                temp = array[position];
                array[position] = array[value];
                array[value] = temp;
            }
        }
    }
    for (position = 0; position < size; printf("%d ", array[position++]))
        ;
}