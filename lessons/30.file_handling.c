#include <stdio.h>

/*
    ============================
    FILE HANDLING IN C - EXPLAINED
    ============================

    1. WHAT IS FILE HANDLING?
    -------------------------
    - File handling allows a program to store data permanently on disk.
    - Unlike variables (which store data temporarily in RAM),
      files let you save data even after the program ends.
    - Common operations: create, open, read, write, close files.

    2. FILE POINTER (FILE *)
    ------------------------
    - C uses a special pointer called FILE* to work with files.
    - FILE *fp declares a pointer to a file stream.
    - This pointer manages the file’s state (position, error, EOF, etc.).

    3. OPENING A FILE - fopen()
    ----------------------------
    Syntax:
        FILE *fopen(const char *filename, const char *mode);

    - filename: name/path of the file
    - mode: how you want to open the file (read, write, append, etc.)

    Common modes:
    - "r"  : open for reading (file must exist)
    - "w"  : open for writing (creates file or truncates existing)
    - "a"  : open for appending (creates file if not exist)
    - "r+" : read and write (file must exist)
    - "w+" : write and read (creates/truncates)
    - "a+" : append and read

    4. CLOSING A FILE - fclose()
    -----------------------------
    - Always close a file after operation to free resources.
    Syntax:
        int fclose(FILE *fp);

    5. WRITING TO FILE - fprintf() / fputs() / fwrite()
    ---------------------------------------------------
    - fprintf(fp, "format", args...) works like printf but writes to file.
    - fputs("string", fp) writes a string (no formatting).
    - fwrite() writes raw bytes (used for binary files).

    6. READING FROM FILE - fscanf() / fgets() / fread()
    ---------------------------------------------------
    - fscanf(fp, "format", &vars...) reads formatted data.
    - fgets(buffer, size, fp) reads a line or specified size string.
    - fread() reads raw bytes (used for binary files).

    7. ERROR CHECKING
    -----------------
    - fopen returns NULL if file couldn't be opened.
    - Always check before reading/writing.

    8. EOF (End of File)
    ---------------------
    - feof(fp) returns true if end of file reached during reading.

*/

/*
    EXAMPLE: WRITE TO FILE "output.txt"
*/
void writeToFile() {
    FILE *fp = fopen("output.txt", "w"); // open file for writing

    if (fp == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }

    fprintf(fp, "Hello, this is a test file.\n");
    fprintf(fp, "Writing some numbers: %d, %d, %d\n", 10, 20, 30);

    fclose(fp); // always close file
    printf("Data written to file successfully.\n");
}

/*
    EXAMPLE: READ FROM FILE "output.txt"
*/
void readFromFile() {
    char buffer[100];

    FILE *fp = fopen("output.txt", "r"); // open file for reading

    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return;
    }

    printf("Reading file content:\n");
    // Read line by line until EOF
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);  // fgets keeps newline, so no \n needed here
    }

    fclose(fp);
}

/*
    EXAMPLE: APPEND DATA TO FILE
*/
void appendToFile() {
    FILE *fp = fopen("30.1.output.txt", "a"); // open file to append

    if (fp == NULL) {
        printf("Error: Could not open file for appending.\n");
        return;
    }

    fprintf(fp, "Appending this line to the file.\n");
    fclose(fp);
    printf("Data appended successfully.\n");
}


int main() {
    writeToFile();
    readFromFile();

    appendToFile();
    printf("\nAfter appending:\n");
    readFromFile();

    return 0;
}

/*
    SUMMARY:
    --------
    - fopen() opens file and returns FILE* pointer (NULL if error).
    - fclose() closes file and releases resources.
    - fprintf(), fputs(), fwrite() write to files.
    - fscanf(), fgets(), fread() read from files.
    - Always check for NULL pointer before operating on files.
    - Use "r", "w", "a" modes for reading, writing, appending.
    - Use loops with fgets/fscanf to read entire file.
    - Closing files is essential to save data properly.
*/
