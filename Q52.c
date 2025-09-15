/*
 Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/
#include <stdio.h>

int main() {
    int n = 5; // maximum stars in the middle block

    // First half (1, 3, 5)
    for (int i = 1; i <= n; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line between blocks
    }

    // Second half (3, 1)
    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 1; j <= i; j++) {
            printf("*\n");
        }
        if (i != 1)  // avoid extra blank line after last star
            printf("\n");
    }

    return 0;
}
