//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input number
    scanf("%d", &num);

    // Loop to extract digits and add them
    while (num > 0) {
        remainder = num % 10;   // extract last digit
        sum += remainder;       // add digit to sum
        num = num / 10;         // remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
