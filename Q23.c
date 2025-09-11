// Write a program to calculate library fine based on late days as follows: 

#include <stdio.h>

int main() {
    int days, fine;
    printf("Enter the no of days");
    scanf("%d", &days);

    if (days <= 5) {
        fine = days * 2;
        printf("Fine %d\n", fine);
    }
    else if (days >6 && days <=10) {
        fine = (5 * 2) + (days) * 4;
        printf("Fine %d\n", fine);
    }
    else if (days >= 11 && days <=30) {
        fine = (5 * 2) + (5 * 4) + (days)* 6;
        printf("Fine %d\n", fine);
    }
    else {
        printf("Membership Cancelled\n");
    }

    return 0;
}
