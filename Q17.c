#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    // a,b,c,d are variable and 'd' represents as discriminant
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);

    d = pow(b,2) - 4*a*c;
    printf("%d\n",d);

    if(d>0){
        printf("Real and Unequal Roots ");
               
    } 
    else if(d<0){
                printf("No Real Roots");
               }
 
                      else{
                        printf("Equal Roots And Real");
                      }
    return 0;
}
