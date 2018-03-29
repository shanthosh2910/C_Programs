// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include <stdio.h>
int main()
{
    int rows, traverse, number;
    scanf("%d", &rows);
    for (traverse = 0; traverse < rows; traverse++, printf("\n"))
        for (number = 0; number <= traverse; printf("%d ", ++number));
    return 0;
}