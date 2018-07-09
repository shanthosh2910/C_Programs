// Find if a String2 is substring of String1. If it is, return the index of the first occurrence. else return -1.
// Input:
// this123asdf
// 123
// Output:
// 5

#include <stdio.h>
#include <string.h>
int main()
{
    char string[50], substring[50], find = 0, x = 1;
    int stringLength, substringLength, cursor1, cursor2, cursor3;
    gets(string);
    gets(substring);
    stringLength = strlen(string);
    substringLength = strlen(substring);
    for (cursor1 = 0; cursor1 < stringLength; cursor1++)
    {
        find = 0;
        for (cursor2 = 0; cursor2 < substringLength; cursor2++)
        {
            if (string[cursor1 + cursor2] == substring[cursor2])
                find++;
        }
        if (find == substringLength)
        {
            printf("%d", cursor1 + 1);
            break;
        }
    }
    if (cursor1 == stringLength)
        printf("-1");
}