#include <stdio.h>

int main() {
    int n;
    float num, sum = 0.0;

    printf("Enter the number of floats n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter a float: ");
        scanf("%f", &num);
        sum += num;
    }

    printf("Sum of the floats: %.1f\n", sum);

    return 0;
}