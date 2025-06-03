#include <stdio.h>
#include <time.h>
#include <unistd.h>  // For sleep() on Linux/macOS. On Windows, use Sleep()

#ifdef _WIN32
#include <windows.h>
#define CLEAR_SCREEN() system("cls")   // Windows clear screen command
#define SLEEP(sec) Sleep(sec * 1000)   // Sleep takes milliseconds on Windows
#else
#define CLEAR_SCREEN() system("clear") // Linux/macOS clear screen command
#define SLEEP(sec) sleep(sec)           // sleep takes seconds on Linux/macOS
#endif

/*
    Digital Clock Project in C

    - Uses system time to get current hours, minutes, seconds.
    - Clears the console and prints the time every second.
    - Uses cross-platform macros for clearing screen and sleeping.
    - Displays time in HH:MM:SS format with leading zeros.
*/

int main() {
    time_t rawtime;
    struct tm * timeinfo;

    while (1) {
        CLEAR_SCREEN();

        time(&rawtime);                    // Get current time in seconds since epoch
        timeinfo = localtime(&rawtime);   // Convert to local time structure

        // Display formatted time with leading zeros
        printf("Digital Clock:\n");
        printf("%02d:%02d:%02d\n", 
               timeinfo->tm_hour, 
               timeinfo->tm_min, 
               timeinfo->tm_sec);

        SLEEP(1);  // Wait for 1 second before refreshing
    }

    return 0;
}
   