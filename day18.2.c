//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main() {
    int num1, num2, hcf;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        hcf = num1;
    } else {
        hcf = num2;
    }
    while (hcf > 0) {
        if (num1 % hcf == 0 && num2 % hcf == 0) {
            printf("HCF of %d and %d is %d.\n", num1, num2, hcf);
            break;
        }
        hcf--;
    }
    return 0;
}           