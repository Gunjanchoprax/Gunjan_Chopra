//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Input number
    scanf("%d", &num);

    original = num;  // Store original number

    // Reverse the number
    while (num > 0) {
        remainder = num % 10;              // Extract last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        num = num / 10;                    // Remove last digit
    }

    // Check palindrome
    if (original == reversed)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
