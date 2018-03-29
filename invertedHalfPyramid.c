// * * * *
// * * *
// * *
// *

#include <stdio.h>
int main()
{
    int traverse, row, pattern;
    scanf("%d", &row);
    for (traverse = row; traverse > 0; traverse--, printf("\n"))
        for (pattern = 0; pattern < traverse; pattern++, printf("* "))
            ;
    return 0;
}