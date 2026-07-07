//Wap to count the digit in numbers 2222=4
#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // If number is 0, it has 1 digit
    if (num == 0) {
        count = 1;
    } else {
        // For negative numbers, make them positive
        if (num < 0) {
            num = -num;
        }

        // Count digits
        while (num > 0) {
            num = num / 10;  // Remove last digit
            count++;
        }
    }

    printf("Total digits: %d\n", count);
}



