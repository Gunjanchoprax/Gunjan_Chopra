#include <stdio.h>

int main() {
    int a, b, c;

    // Input sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check for Equilateral
    if (a == b && b == c) {
        printf("Equilateral\n");
    }
    // Check for Isosceles
    else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    }
    // Otherwise, it is Scalene
    else {
        printf("Scalene\n");
    }

    return 0;
}
