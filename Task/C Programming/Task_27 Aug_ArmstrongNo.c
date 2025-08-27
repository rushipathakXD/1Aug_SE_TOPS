//Wap to find if a number is armstrong number or not

#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    // Count digits
    while (temp != 0) {
        digits++;
        temp = temp/ 10;
    }
    temp = num;
    // Compute sum of powered digits
    while (temp != 0) {
        sum = sum + pow(temp % 10, digits);
        temp =temp/ 10;
    }
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}

