#include <stdio.h>

int main() {
    int n, i;
    int even = 0, odd = 0;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input elements of array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Output result
    printf("Even=%d, Odd=%d", even, odd);

    return 0;
}
