//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    int n, i;
    int binary[100];

    // Input number of bits
    scanf("%d", &n);

    // Input binary digits
    for(i = 0; i < n; i++) {
        scanf("%d", &binary[i]);
    }

    // Find 1's complement
    for(i = 0; i < n; i++) {
        if(binary[i] == 0)
            binary[i] = 1;
        else
            binary[i] = 0;
    }

    // Print result
    for(i = 0; i < n; i++) {
        printf("%d", binary[i]);
    }

    return 0;
}
