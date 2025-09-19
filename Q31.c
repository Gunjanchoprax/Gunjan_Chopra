//(Loops without Arrays/Strings)
#include <stdio.h>

int main() {
    int cp, sp;
    int diff, percentage = 0;

    // Input Cost Price and Selling Price
    scanf("%d %d", &cp, &sp);

    if (sp > cp) {
        diff = sp - cp;

        // calculate (diff / cp) * 100 using loops
        for (int i = 0; i < (diff * 100); i += cp) {
            percentage++;
        }
        printf("Profit %d%%", percentage);
    }
    else if (sp < cp) {
        diff = cp - sp;

        // calculate (diff / cp) * 100 using loops
        for (int i = 0; i < (diff * 100); i += cp) {
            percentage++;
        }
        printf("Loss %d%%", percentage);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}
