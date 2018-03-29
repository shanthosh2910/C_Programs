// print the sum of second smallest and second largest in a window of size 10 in array
// initially the window(size 10) is pointing from indices 0 to 9 , then 1 - 10 and so on

#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[] = {12, 89, 45, 67, 22, 95, 69, 90, 11, 77, 44, 55, 88, 20, 40, 50, 18, 28, 27, 6, 1, 9};
    int small, ss, big, sb, size, ind, window = 10, outer;
    small = ss = INT_MAX;
    big = sb = INT_MIN;
    size = sizeof(arr) / sizeof(arr[0]);
    for (outer = 0; outer < size - window; outer++)
    {
        small = ss = INT_MAX;
        big = sb = INT_MIN;
        for (ind = outer; ind < outer + window; ind++)
        {
            if (arr[ind] < small)
            {
                ss = small;
                small = arr[ind];
            }
            else if (arr[ind] < ss)
                ss = arr[ind];
            if (arr[ind] > big)
            {
                sb = big;
                big = arr[ind];
            }
            else if (arr[ind] > sb)
                sb = arr[ind];
        }
        printf("%d %d, %d\n", ss, sb, ss + sb);
    }
}
