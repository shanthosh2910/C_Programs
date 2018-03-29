// print the longest sub palindrome possible in a string
// banana - anana (5 char)


#include <stdio.h>
int main()
{
    char str[] = "test";
    int left, right, index, palSize, maxPalSize = 0, flag = 0, index2;
    for (index = 1; str[index + 1]; index++)
    {
        left = index - 1;
        right = index + 1;
        while (left > -1 && str[left] && str[right] && str[left] == str[right])
        {
            flag = 1;
            left--;
            right++;
        }
        if (flag == 1)
        {
            left++;
            right--;
            palSize = (right - left) + 1;
            if (palSize > maxPalSize)
                maxPalSize = palSize;
        }
    }

    // if (maxPalSize == 0)
    // {
    //     for (index2 = strlen(str), index = strlen(str) - 2; index >= 0; index--, index2++)
    //         str[index2] = str[index];
    //     str[index2] = NULL;
    //     printf("%s", str);
    // }
    // else
    //     printf("%d", maxPalSize);
    // return 0;
}
