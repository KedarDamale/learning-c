// scanf() is used to get input from the user.

#include <stdio.h>
#include <string.h>

int main() {
    int age;               // Declaration of integer variable (not initialization).
    char name[30];         // Declaration of a string (character array). Size must be specified.
    char c = '\0';         // Initializing character with null character to avoid garbage value.

    // ➤ Important Note on Garbage Values:
    // Declared but uninitialized variables in C contain garbage values (random memory data).
    // It's a good practice to initialize variables:
    // int age = 0;
    // float f = 0.0f;
    // double d = 0.0;
    // char ch = '\0';
    // char str[30] = "";

    // ----------------------------
    // Taking input from the user
    // ----------------------------

    // Prompt user
    printf("Enter your age: ");
    // scanf() syntax: scanf("format_specifier", &variable);
    scanf("%d", &age);     // & (address-of operator) is used to give the memory address of variable.

    // ⚠️ Common mistake:
    // scanf("Enter your age %d", &age); ❌ This will NOT work as scanf expects only format specifiers in the format string.

    // --------------------------------------
    // Taking character input
    // --------------------------------------

    // C stores keystrokes (including Enter `\n`) in the input buffer.
    // So when you try to read a char after int/float input, the leftover `\n` is picked up.
    // To fix this, add a space before %c to ignore whitespace and newlines.
    printf("Enter a character: ");
    scanf(" %c", &c);  // Note the space before %c

    // --------------------------------------
    // Taking string input using scanf
    // --------------------------------------

    printf("Enter your name (scanf): ");
    scanf("%s", name);
    // Problem: scanf stops reading after the first whitespace.
    // Input: "Kedar Pravin Damale" → Only "Kedar" will be read.

    // --------------------------------------
    // Taking string input using fgets
    // --------------------------------------

    // Use fgets() to read strings with spaces.
    // Syntax: fgets(variable_name, size, input_source)
    //         input_source = stdin for standard input
    getchar();  // This consumes the leftover newline in the buffer before fgets
    printf("Enter your full name (fgets): ");
    fgets(name, sizeof(name), stdin);

    // But fgets also stores the newline '\n' when Enter is pressed.
    // So we remove it manually using strlen() from string.h
    name[strcspn(name, "\n")] = '\0';  // Better than name[strlen(name)-1] as it works even if newline is absent

    // ----------------------------
    // What is getchar()?
    // ----------------------------
    // getchar() reads a single character from standard input.
    // It's often used to "flush" the newline character from the input buffer after scanf().
    // For example: after scanf("%d", &age), a newline remains in buffer, which interferes with fgets().
    // getchar() consumes that newline so the next input is clean.

    return 0;
}


