// Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;

    // Enter the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    //  this is Loop from 1 to n
    for(i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
        

    return 0;
}

