#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print result
    printf("%d", sum);

    return 0;
}
