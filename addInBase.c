// Add 2 numbers in given Base
// input:
// 123  13 4
// output:
// 202

#include <stdio.h>
#include <math.h>

int reverse(int number)
{
    int digit, reverse;
    digit = reverse = 0;
    while (number)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    return reverse;
}

int main()
{
    int number1, number2, base, sum, digitSum, carry, power;
    sum = digitSum = carry = power = 0;
    scanf("%d%d%d", &number1, &number2, &base);
    while (number1 || number2)
    {
        digitSum = number1 % 10 + number2 % 10 + carry;
        if (digitSum >= base)
        {
            sum = sum * 10 + (digitSum - base);
            carry = 1;
        }
        else
        {
            sum = sum * 10 + digitSum;
            carry = 0;
        }
        number1 /= 10;
        number2 /= 10;
        power++;
    }
    if (carry)
        sum = sum * 10 + carry;
    printf("%d", reverse(sum));
    return 0;
}
