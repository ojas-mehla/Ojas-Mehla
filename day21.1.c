//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main(void) {
long long number, first, last, middle, divisor = 1;

printf("Enter an integer: ");
scanf("%lld", &number);

int negative = number < 0;
if (negative) {
number = -number;
}

last = number % 10;

while (number / divisor >= 10) {
divisor *= 10;
}

first = number / divisor;
middle = (number % divisor) / 10;

long long result = last * divisor + middle * 10 + first;

if (negative) {
result = -result;
}
printf("After swapping first and last digits: %lld\n", result);
return 0;
}
