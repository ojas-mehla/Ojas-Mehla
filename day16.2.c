//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    unsigned int n;
    int binary[32];
    int i = 0;

    printf("Enter a non-negative integer: ");
    scanf("%u", &n);

    if (n == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    printf("Binary representation: ");

    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    printf("\n");

    return 0;
}
