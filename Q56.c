#include <stdio.h>

int main() {
    int n, i;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
