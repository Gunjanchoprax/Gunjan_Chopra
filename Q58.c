#include <stdio.h>

int main() {
    int n, i;
    int max, min;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with first element
    max = min = arr[0];

    // Find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    // Print result
    printf("Max=%d, Min=%d", max, min);

    return 0;
}
