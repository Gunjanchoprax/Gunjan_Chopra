//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    gets(name);  

    int len = strlen(name);
    int lastSpace = -1;

    // Find position of last space (to get surname)
                  for (int i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    // Print initials of all names except surname
    printf("Result: ");
    for (int i = 0; i < len; i++) {
        if ((i == 0 || name[i - 1] == ' ') && i < lastSpace) {
            printf("%c.", toupper(name[i]));
        }
    }

    // Print surname in full
    for (int i = lastSpace + 1; i < len; i++) {
        printf("%c", name[i]);
    }

    return 0;
}
