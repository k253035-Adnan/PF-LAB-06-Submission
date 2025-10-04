#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num = num / 10;
    }

    if (sum == originalNum) {
        printf("%d is an Armstrong Number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong Number.\n", originalNum);
    }

    return 0;
}

