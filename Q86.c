//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i, j, mismatch = 0;

    printf("Enter a string: ");
    gets(str);

    i = 0;
    j = strlen(str) - 1;

    while(i < j) {
        if(str[i] != str[j]) {
            mismatch++;   // count mismatch
        }
        i++;
        j--;
    }

    if(mismatch == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
