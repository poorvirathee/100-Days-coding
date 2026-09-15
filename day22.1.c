//Write a program to check if a number is a strong number
#include <stdio.h>
int main() {
    int num, sum = 0, temp;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }
    if (sum == num) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }
    return 0;
}           