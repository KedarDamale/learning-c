#include <stdio.h>

int main() {
    float w_kg = 0.0f;
    float w_pound = 0.0f;
    char choice = '\0';

    // Prompt user for conversion choice
    printf("Enter K to convert your weight in pounds into kg\n");
    printf("Enter P to convert your weight in kgs into pounds\n");

    // ⚠️ Do NOT put a space before the format specifier (%c)
    //     scanf(" %c", ...) would ignore whitespace; 
    //     scanf("%c", ...) takes the next character (even newline), so be careful
    scanf("%c", &choice);

    /*
       ┌───────────────┐
       │   choice?     │
       └─────┬─────────┘
             │
        ┌────▼─────┐
        │ choice==K│ (or k)
        └────┬─────┘
             │ YES
             ▼
       [Input weight in pounds]
       [Convert to kg → /2.2]
             │
             ▼
      Print result in kg
             │
          ┌──┴────┐
     NO ◄─┤        ├─► Check choice==P (or p)
          └──┬────┘
             │ YES
             ▼
       [Input weight in kg]
       [Convert to pounds → *2.2]
             │
             ▼
      Print result in pounds
             │
          ┌──┴────┐
     NO ◄─┤        ├─► Invalid choice
          └───────┘
    */

    if (choice == 'K' || choice == 'k') {
        printf("Enter your weight in pounds: ");
        scanf("%f", &w_pound);
        printf("Your weight is %.2f kgs", w_pound / 2.2);
    }
    else if (choice == 'P' || choice == 'p') {
        printf("Enter your weight in kgs: ");
        scanf("%f", &w_kg);
        printf("Your weight is %.2f pounds", w_kg * 2.2);
    }
    else {
        printf("Sorry, some error occurred (invalid choice)");
    }

    return 0;
}
