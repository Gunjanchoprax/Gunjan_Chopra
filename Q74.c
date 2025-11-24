//Find the transpose of a matrix
#include<stdio.h>
int main(){

    int a[3][3];  
    int i, j;
    int row , col;

    printf("Enter here:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
            
        }
        printf("\n");
    }
    printf("Transpose of Matrix is\n");
 for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[j][i]);
            
        }
        printf("\n");
    }

  

   
    return 0;
}
