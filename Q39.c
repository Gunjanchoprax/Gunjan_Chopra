//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit, product = 1, hasOdd = 0;

    // Input number
    scanf("%d", &num);

    // Loop to check each digit
    while (num > 0) {
        digit = num % 10;          // extract last digit
        if (digit % 2 != 0) {      // check if odd
            product *= digit;      // multiply odd digit
            hasOdd = 1;            // mark that odd digit exists
        }
        num = num / 10;            // remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits = %d", product);
    else
        printf("No odd digits");

    return 0;
}
