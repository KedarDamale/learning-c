#include <stdio.h>
#include <string.h>  // Required for strcspn() function to remove newline

int main() {
    char item[50]="";           // Array to store item name
    int quantity = 0;        // Integer variable for item quantity
    float price = 0.0f;      // Float variable for price per item

    // Prompt the user to enter the item name
    printf("What item would you like to buy: ");
    fgets(item, sizeof(item), stdin);  // fgets reads the entire line including spaces

    // Remove the trailing newline added by fgets
    item[strcspn(item, "\n")] = '\0';

    // Prompt for quantity
    printf("How much would you like to buy: ");
    scanf("%d", &quantity);  // ❌ DO NOT use '\n' in format string here
                             // ⚠️ Including '\n' in scanf(" %d\n", ...) causes it to wait for a NEW newline,
                             // even if one already exists in the input buffer. This can freeze input or skip steps.
                             // No leading space before %d is necessary (avoid issues caused by input buffer newline)
    // Prompt for price per item
    printf("What will the price: ");
    scanf("%f", &price);     // %f reads a float; again, do not include '\n' here

    // Calculate the total bill
    float total = quantity * price;

    // Display the total cost with two decimal precision
    printf("Thank you for buying %d %s's\n",quantity,item);
    printf("That will be ₹%.2f\n", total);
    printf("Thank you, please visit again\n");

    return 0;  // Exit with status 0 (successful)
}
