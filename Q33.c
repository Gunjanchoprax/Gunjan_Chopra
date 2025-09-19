//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int num, original, remainder, n = 0;
    int result = 0, power, i;

    // Input number
    scanf("%d", &num);
    original = num;

    // Step 1: Count number of digits
    int temp = num;
    while (temp > 0) {
        n++;
        temp = temp / 10;
    }

    // Step 2: Compute sum of digits^n
    temp = num;
    while (temp > 0) {
        remainder = temp % 10;

        // compute remainder^n using loop (no pow function)
        power = 1;
        for (i = 0; i < n; i++) {
            power *= remainder;
        }

        result += power;
        temp = temp / 10;
    }

    // Step 3: Check Armstrong condition
    if (result == original)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
