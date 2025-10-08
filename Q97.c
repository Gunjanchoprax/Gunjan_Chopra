//Print the initials of a name.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    gets(name);  

    printf("Initials: ");
    for (int i = 0; i < strlen(name); i++) {
        if (i == 0 || name[i - 1] == ' ') {  
            printf("%c.", toupper(name[i]));
        }
    }
    return 0;
}
