//Write a program to print all factors of a given number.
#include <stdio.h>

int main() {
    int num, i;

    // Input number
    scanf("%d", &num);

    // Print all factors
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
