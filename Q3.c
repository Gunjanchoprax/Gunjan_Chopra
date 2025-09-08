//  Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main()
{ int l , b ;
    // l and b are length and breath respectively
    printf("Enter the value of l:");
    scanf("%d", &l);
    printf("Entere the value of b:");
    scanf("%d", &b);
    int area=  l*b;
    int perimeter = 2*(l+b);
    printf("Area is :%d\n",area);
    printf("Perimeter is :%d",perimeter);
    return 0;


}
