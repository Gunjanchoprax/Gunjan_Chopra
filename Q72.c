//Find the sum of all elements in a matrix.
#include<stdio.h>
int main(){


int a[2][4];
int i,j,sum=0;
printf("Enter here:\n");
for(i=0;i<2;i++)
{
   for(j=0;j<4;j++){
    scanf("%d",&a[i][j]);
   }
}
for(i=0;i<2;i++)
{
   for(j=0;j<4;j++){
    printf("%d\t",a[i][j]);
sum = sum+a[i][j];
   }
   printf("\n");
  
}
printf("Sum = %d",sum);

return 0;
}
