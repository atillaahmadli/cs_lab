#include <stdio.h>

int main() {
    int n;
    double harmonic_sum = 0.0;

    printf("Enter a number n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        harmonic_sum += 1.0 / i;
    }

    printf("Harmonic sum: %.3f\n", harmonic_sum);

    return 0;
}