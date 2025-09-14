// Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main(){
    int  n,i,sum_odd;

    printf("Enter the value of n");
    scanf("%d",&n);
    
        
    
         for(i=1; i<=n; i++){
          sum_odd = 2*i - 1 + sum_odd;  
         }
         printf("%d",sum_odd);
           return 0;
}

