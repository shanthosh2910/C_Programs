// print the numbers in words
// input:
// 720
// output:
// seven hundred and twenty

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ones[20][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"},
         tens[10][9] = {"", "ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    int number, remainder;
    scanf("%d", &number);
    if (number >= 0 && number <= 99)
    {
        if (number >= 0 && number <= 19)
            printf("%s", ones[number]);
        else
        {
            printf("%s", tens[number / 10]);
        }
    }
    else if (number / 100)
    {
        printf("%s hundred", ones[number / 100]);
        remainder = number % 100;
        if (remainder >= 1 && remainder <= 19)
            printf(" and %s", ones[remainder]);
        else
        {
            printf(" and %s", tens[remainder / 10]);
            if (number % 10)
                printf("%s", ones[remainder]);
        }
    }
    return 0;
}