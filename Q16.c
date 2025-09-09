// Write a program to input three numbers and find the largest among them using if-else.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value of a,b,c");
    scanf("%d%d%d,",&a, &b, &c);
    

    if (a>b&&a>c){
        printf("a is greater : %d",a);
    }
    else if(b>a&&b>c){
        printf("b is greater",b);
    }
    else{
        printf("c is greater");
    }
    return 0;
}
