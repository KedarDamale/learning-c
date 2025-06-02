#include <stdio.h>  // Preprocessor directive: includes the Standard Input Output header file (stdio.h),
                    // which provides declarations for input/output functions like printf(), scanf(), etc.
                    // This directive is handled by the preprocessor before actual compilation begins.

int main() {
    // main() is the entry point of any standard C program.
    // Program execution always starts from the main function.
    // All executable code must be placed inside main() or inside functions that are called from main().
    
    printf("Hello Kedar");  // printf() is a standard library function declared in stdio.h.
                            // It prints the specified string to the standard output (typically the terminal).

    printf("Hello");
    printf("Hello");
    // Output: HelloHello
    // All three strings are printed on the same line since no newline character is included.

    // To print each output on a separate line, use the newline character '\n':
    printf("Hello \n");
    printf("Hello \n");

    // '\n' is called the newline character.
    // It instructs the output to move the cursor to the beginning of the next line.

    return 0;  // return 0 indicates that the program terminated successfully.
               // A non-zero return value usually indicates an error.
               // In modern C (C99 and above), this can be omitted if using int main().

}

// A semicolon (;) is mandatory at the end of each C statement.
// It tells the compiler where one statement ends and the next begins.

// Comments are non-executable parts of the code used for documentation or explanation.
// The compiler ignores them during compilation.
// Shortcut to comment/uncomment selected lines in most IDEs/editors: Select the code + Ctrl + /
