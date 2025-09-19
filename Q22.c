// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss;

    // Input cost price and selling price
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        profitOrLoss = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %.0f%%", profitOrLoss);
    } 
    else if (sellingPrice < costPrice) {
        profitOrLoss = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %.0f%%", profitOrLoss);
    } 
    else {
        printf("No Profit No Loss");
    }

    return 0;
}
