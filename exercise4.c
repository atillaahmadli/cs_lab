#include <stdio.h>

int main() {
    float x, y;

    // Input: the value of x
    printf("Enter a value for x: ");
    scanf("%f", &x);

    // Process the expression based on the value of x
    if (x > 0) {
        y = x * x - 2 * x + 3;
    } else if (x == 0) {
        y = x - 5;
    } else {
        y = x * x + 2 * x - 3;
    }

    // Output the result
    printf("The value of y is: %.2f\n", y);

    return 0;
}
