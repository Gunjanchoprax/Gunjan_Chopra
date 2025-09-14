Q29: Write a program to calculate the factorial of a number.

#include<stdio.h>
int main(){
    int i,n,fact;

     printf("Enter n");
     scanf("%d",&n);

    for(i=0; i<=n; i++){
 
        fact = i*fact + fact;

    } printf("%d",fact);
    return 0;
} 
