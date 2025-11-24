//Find the sum of each row of a matrix and store it in an array.
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

   for(i = 0; i < 3; i++)
    { row=0;
        col = 0;
        for(j = 0; j < 3; j++)
        {
            
            row = row + a[i][j];
            col = col + a[j][i];
        }
        printf("\n row=%d, col=%d",row,col);
    }

   
    return 0;
}
