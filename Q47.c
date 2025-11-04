//Q47: Write a program to print the following pattern:
*
**
***
****
*****


#include<stdio.h>
int main(){
    int  n,j,i;

    printf("Enter the value of n");
    scanf("%d",&n);
    
        
    
         for(i=1; i<=n; i++){
         for(j=1; j<=n;j++){
         if(i>=j){
          printf("*");
         }
         }printf("\n");
         }
         
           return 0;
}

