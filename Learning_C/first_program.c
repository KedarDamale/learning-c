#include <stdio.h>  // Preprocessor directive: includes the Standard Input Output header file (stdio.h), 
                    // which provides declarations for functions like printf(), scanf(), etc.
                    // This line is handled by the preprocessor before compilation begins.

int main() {
    // main() is the entry point of any standard C program.
    // Program execution starts from the main function.
    // Every executable statement in a basic C program must be inside main() or functions called from it.
    
    printf("Hello Kedar");  // printf is a standard library function declared in stdio.h
                            // It prints the string "Hello Kedar" to the standard output (usually the terminal).

    printf("Hello");
    printf("Hello");
    //output: HelloHello
    
    return 0;  // return 0 indicates successful program termination to the operating system. a non zero value typically indicates an error. we can omit this statement btw
}

//semicolon is necessary at the end of each statement it tells compiler where the statement ends 