//Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <stdio.h>

int main(void) {
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
