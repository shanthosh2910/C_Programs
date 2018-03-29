#include <stdio.h>
#include <time.h>
    int i = 0;
int main()
{
    clock_t start, end;

    start = clock();
    // int a;
    // scanf("%d", &a);
    // printf("%d", a);

    printf("hello");
    // while (i < 1000000000)
    // {
    //     i++;
    // }
    printf("\n%d", i);
    end = clock();
    printf("\n\nExecution time %gs", (double)(end - start) / CLOCKS_PER_SEC);
}
