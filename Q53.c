// Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

#include <stdio.h>

int main() {
    int rows = 5; // Maximum number of stars in the middle

    // Upper half (increasing stars)
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (decreasing stars)
    for(int i = rows - 1; i >= 1; i--) {
        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}