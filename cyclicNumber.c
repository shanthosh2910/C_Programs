// Cyclic number verification
// Input:
// 12345 45123
// Output:
// Yes

#include <stdio.h>

int digitCount(int number)
{
    int count = 0;
    while (number)
    {
        count++;
        number /= 10;
    }
    return count;
}

int power(int base, int exponent)
{
    int value = 1;
    for (int i = 0; i < exponent; i++)
        value *= base;
    return value;
}

int rotate(int number, int count, int power)
{
    int digit, rotated;
    digit = number % 10;
    number /= 10;
    rotated = digit * power + number;
    // simply we can write rotated = (number % 10) * power + (number / 10)
    return rotated;
}

int main()
{
    int number1, number2, isDigit, digits, cyclic = 0, pow;
    scanf("%d%d", &number1, &number2);
    digits = isDigit = digitCount(number1);
    pow = power(10, digits - 1);
    while (isDigit)
    {
        if (number1 == number2)
        {
            cyclic = 1;
            break;
        }
        number2 = rotate(number2, digits, pow);
        isDigit--;
    }
    if (cyclic)
        printf("Yes");
    else
        printf("No");
}