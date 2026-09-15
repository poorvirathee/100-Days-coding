//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    printf("1's complement of %d is %d.\n", num, ~num);
    return 0;
}               