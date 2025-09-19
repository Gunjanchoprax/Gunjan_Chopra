//Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, lcm;

    // Input two numbers
    scanf("%d %d", &a, &b);

    // Start from the greater of the two numbers
    lcm = (a > b) ? a : b;

    // Find the first number divisible by both a and b
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("LCM = %d", lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
