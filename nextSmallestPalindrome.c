// Given a number, find the next smallest palindrome larger than this number
// Input:
// 1 2 3 4
// Output:
// 1 3 3 1

#include <stdio.h>

int allNine(int array[], int size)
{
    for (int i = 0; i < size; i++)
        if (array[i] != 9)
            return 0;
    return 1;
}

int isPalindrome(int array[], int end)
{
    int start, limit = end / 2;
    for (start = 0; start < limit; start++, end--)
        if (array[start] != array[end])
            return 0;
    return 1;
}

int main()
{
    int size, element;
    scanf("%d", &size);
    int array[size];
    for (element = 0; element < size; scanf("%d", &array[element++]))
        ;
    if (isPalindrome(array, size - 1))
    {
        if (size % 2 == 0)
            array[(size / 2) - 1]++;
        array[size / 2]++;
    }
    else if (allNine(array, size))
    {
        printf("1");
        for (int i = 0; i < size - 1; i++, printf("0"))
            ;
        printf("1");
    }
    else
    {
        int end = size, limit = size - 1;
        if (size % 2 == 0)
        {
            end = size - 1;
            limit = size;
        }
        for (int start = 0; start < limit / 2; start++)
            array[limit] = array[start];
        array[end / 2]++;
    }
    for (element = 0; element < size; printf("%d ", array[element++]))
        ;
}

// Inference:
// There can be three different types of inputs that need to be handled separately.
// 1) The input number is palindrome and has all 9s. For example “9 9 9”. Output should be “1 0 0 1”
// 2) The input number is not palindrome. For example “1 2 3 4”. Output should be “1 3 3 1”
// 3) The input number is palindrome and doesn’t have all 9s. For example “1 2 2 1”. Output should be “1 3 3 1”.
