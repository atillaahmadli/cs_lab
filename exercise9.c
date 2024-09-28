#include <stdio.h>
#include <stdlib.h>


int maxProduct(int digits[3]) {
    int prod1 = digits[0] * digits[1] * digits[2]; // Multiply all digits
    int prod2 = digits[0] * digits[1];             // Multiply first two digits
    int prod3 = digits[1] * digits[2];             // Multiply last two digits
    int prod4 = digits[0] * digits[2];             // Multiply first and last digits
    int prod5 = digits[0];                         
    int prod6 = digits[1];                         
    int prod7 = digits[2];                         

 
    int max = prod1;
    if (prod2 > max) max = prod2;
    if (prod3 > max) max = prod3;
    if (prod4 > max) max = prod4;
    if (prod5 > max) max = prod5;
    if (prod6 > max) max = prod6;
    if (prod7 > max) max = prod7;

    return max;
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
