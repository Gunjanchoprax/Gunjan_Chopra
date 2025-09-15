//Write a program to print the following pattern:
/*5
45
345
2345
12345*/

#include <stdio.h>

int main() {
    int n = 5;  // number of rows
    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // print numbers
        for (int j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
