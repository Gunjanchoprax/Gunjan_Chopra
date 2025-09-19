//Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Input number
    scanf("%d", &num);

    // Find sum of proper divisors
    for(i = 1; i <= num/2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    // Check if sum equals number
    if(sum == num)
        printf("Perfect number");
    else
        printf("Not perfect number");

    return 0;
}
