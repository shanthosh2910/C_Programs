// count the non reppeating elements in an array within an intervals

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int count = 0, left, right, i, j, numberOfTerms;
    bool unique = true;
    scanf("%d%d%d", &numberOfTerms, &left, &right);
    int array[numberOfTerms];
    for (i = 0; i < numberOfTerms; i++)
        scanf("%d", array[i]);
    for (i = left; i < right; i++)
    {
        for (j = 0; j < right; j++)
        {
            if (array[i] == array[j] && i != j)
            {
                unique = false;
                break;
            }
        }
        if (unique)
            count++;
        unique = true;
    }
    printf("%d", count);
}