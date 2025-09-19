// Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input number
    scanf("%d", &num);

    // Reverse logic
    while (num != 0) {
        remainder = num % 10;           // Get last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        num = num / 10;                 // Remove last digit
    }

    // Output reversed number
    printf("%d", reversed);

    return 0;
}

