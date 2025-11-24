//Add two Matrices
#include<stdio.h>
int main(){

    int a[3][3],b[3][3],c[3][3]; 
    int i, j;
    

    printf("Enter here Mat 1:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
printf("Second Mat\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
            
        }
        
    }
    printf("Add of Mat");

 for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
c[i][j] = a[i][j]+b[i][j];
            
        }
        
    }
printf("Their sum is\n");
  for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
           
            printf("%d\t", c[i][j]);
            
        }
        printf("\n");
    }
     

   
    return 0;
}
