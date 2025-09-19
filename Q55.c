#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    // Input limit
    scanf("%d", &n);

    // Loop through numbers from 2 to n
    for(i = 2; i <= n; i++) {
        isPrime = 1; // Assume number is prime

        // Check divisibility
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        // If prime, print it
        if(isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
