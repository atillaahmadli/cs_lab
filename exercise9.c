#include <stdio.h>
#include <stdlib.h>



}

int main() {
    int number;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    
    number = abs(number);

   
    int digits[3];
    digits[0] = number / 100;          
    digits[1] = (number / 10) % 10;    
    digits[2] = number % 10;           

    
    int result = maxProduct(digits);

   
    printf("Maximum product of the digits: %d\n", result);

    return 0;
}
