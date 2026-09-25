//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main(void) {
int n;
double sum = 0.0;

printf("Enter the number of terms: ");
if (scanf("%d", &n) != 1 || n < 0) {
printf("Please enter a non-negative integer.\n");
return 1;
}
for (int i = 1; i <= n; i++) {
sum += (double)(2 * i - 1) / (2 * i);
}
printf("Sum of the series = %.6f\n", sum);
return 0;
}
