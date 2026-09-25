//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main(void) {
int number, original, digit;
int sum = 0;

printf("Enter a number: ");
scanf("%d", &number);
original = number;
while (number > 0) {
 digit = number % 10;

int factorial = 1;
for (int i = 1; i <= digit; i++) {
factorial *= i;
}

sum += factorial;
number /= 10;
}
if (sum == original) {
printf("%d is a strong number.\n", original);
} else {
printf("%d is not a strong number.\n", original);
}
return 0;
}
