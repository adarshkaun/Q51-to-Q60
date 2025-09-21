// Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *

#include <stdio.h>

int main() {
    // Array representing number of stars in each group
    int groups[] = {1, 3, 5, 3, 1};
    int totalGroups = 5;

    for(int i = 0; i < totalGroups; i++) {
        for(int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        printf("\n"); // Blank line after each group
    }

    return 0;
}
