//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, temp, result;

    // Input number
    scanf("%d", &num);

    // Store original number
    temp = num;

    // Find last digit
    last = num % 10;

    // Find number of digits - 1
    digits = (int)log10(num);

    // Find first digit
    first = num / (int)pow(10, digits);

    // Swap first and last
    result = last * (int)pow(10, digits) + (num % (int)pow(10, digits) - last) + first;

    printf("%d", result);

    return 0;
}
