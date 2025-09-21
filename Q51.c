// Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345

#include <stdio.h>

int main() {
    int rows = 5; // Number of rows

    for(int i = 1; i <= rows; i++) {          
        // Print leading spaces
        for(int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print numbers in each row
        for(int k = rows - i + 1; k <= rows; k++) {
            printf("%d", k);
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}