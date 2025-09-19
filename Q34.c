//Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int num, i, flag = 1;

    // Input number
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not Prime");
        return 0;
    }

    // Check divisibility from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 0; // Not prime
            break;
        }
    }

    if (flag == 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
