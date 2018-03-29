// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <stdio.h>
int main()
{
    int traverse, row, number;
    scanf("%d", &row);
    for (traverse = row; traverse > 0; traverse--, printf("\n"))
        for (number = 0; number < traverse; printf("%d ",++number))
            ;
    return 0;
}