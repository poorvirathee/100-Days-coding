//Write a program to find the product of odd digits of a number
#include <stdio.h>
int main() {
    int num, product = 1, hasOdd = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }
    if (hasOdd) {
        printf("Product of odd digits is %d.\n", product);
    } else {
        printf("No odd digits found.\n");
    }
    return 0;
}               