// Write a program to print the sum of the even numbers from 1 to n.

#include<stdio.h>
int main(){
    int  n,i,sum_even;

    printf("Enter the value of n");
    scanf("%d",&n);
    
        
    
         for(i=1; i<=n; i++){
          sum_even = 2*i  + sum_even;  
         }
         printf("%d",sum_even);
           return 0;
}

