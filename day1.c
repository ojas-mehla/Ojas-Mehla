//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main()
{
int a,b;
printf("enter the value of a and b");
scanf("%d",&a);
scanf("%d",&b);
printf("sum of a and b is %d\n",a+b);
printf("diff of a and b is %d\n",a-b);
printf("product of a and b is %d\n",a*b);
printf("divide of a and b is %d\n",a/b);
return 0;
}
