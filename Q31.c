//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num, binary = 0, place = 1, remainder;

    // Input number
    scanf("%d", &num);

    // Convert to binary
    while (num > 0) {
        remainder = num % 2;          // Get last binary digit
        binary = binary + remainder * place;  
        place = place * 10;           // Shift place (units → tens → hundreds)
        num = num / 2;                // Divide by 2
    }

    // Output binary
    printf("%d", binary);

    return 0;
}
