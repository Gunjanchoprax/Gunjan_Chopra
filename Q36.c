//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a, b, hcf, i;

    // Input two numbers
    scanf("%d %d", &a, &b);

    // Find HCF using loop
    for (i = 1; i <= (a < b ? a : b); i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i; // store the greatest common divisor found so far
        }
    }

    printf("HCF = %d", hcf);

    return 0;
}
