#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, greatest, smallest;

    
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    
    if (number < 0) {
        number = -number;
    }

    
    digit1 = number / 100;        
    digit2 = (number / 10) % 10;  
    digit3 = number % 10;         

  
    greatest = smallest = digit1;

    /
    if (digit2 > greatest) {
        greatest = digit2;
    }
    if (digit2 < smallest) {
        smallest = digit2;
    }

    if (digit3 > greatest) {
        greatest = digit3;
    }
    if (digit3 < smallest) {
        smallest = digit3;
    }

  
    printf("Greatest digit: %d\n", greatest);
    printf("Smallest digit: %d\n", smallest);

    return 0;
}