#include <stdio.h>

int main() {
    int num, result = 0, multiplier = 1;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    int is_negative = (num < 0);
    if (is_negative) {
        num = -num;
    }

    while (num > 0) {
        int digit = num % 10;
        if (digit != 0) {
            result = digit * multiplier + result;
            multiplier *= 10;
        }
        num /= 10;
    }

    if (is_negative) {
        printf("-%d\n", result);
    } else {
        printf("%d\n", result);
    }

    return 0;
}