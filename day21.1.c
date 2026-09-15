//Write a program to swap the first and last digit of a number
#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit, swappedNum;
    printf("Enter an integer: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;
    swappedNum = lastDigit;
    while (firstDigit >= 10) {
        swappedNum *= 10;
        firstDigit /= 10;
    }
    swappedNum += firstDigit;
    printf("Number after swapping first and last digits is %d.\n", swappedNum);
    return 0;
}           