// Write a program to input a year and check whether it is a leap year or not using conditional statements
#include<stdio.h>
int main()
{ 
  char alphabet;

  printf("Enter the alphabet");
  scanf("%c",&alphabet);

  if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o'|| alphabet=='u' ||alphabet=='A'|| alphabet=='E'|| alphabet=='I' || alphabet=='O' || alphabet=='U' ){
      printf("Vowel");
    }
  
  else{
    printf("Consonant");
  }
return 0;
}
    
