// *
// * *
// * * *
// * * * *

#include <stdio.h>
int main()
{
    int rows, traverse, pattern;
    scanf("%d", &rows);
    for (traverse = 0; traverse < rows; traverse++, printf("\n"))
        for (pattern = 0; pattern <= traverse; pattern++, printf("* "));
    return 0;
}