//Write a program to check if a number is an Armstrong number
#include <stdio.h>
int main() {
    int num, original, sum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num /= 10;
    }
    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }
    return 0;
}           