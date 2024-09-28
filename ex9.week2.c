#include <stdio.h>
#include <math.h>

double taylor_sine(double x, int n) {
    double result = 0.0;
    double term;
    int sign;

    for (int i = 0; i < n; i++) {
        sign = (i % 2 == 0) ? 1 : -1;
        term = pow(x, 2 * i + 1) / tgamma(2 * i + 2);
        result += sign * term;
    }

    return result;
}

int main() {
    double x;
    int n;

    printf("Enter x (in radians): ");
    scanf("%lf", &x);
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    double result = taylor_sine(x, n);
    printf("Taylor series approximation: %lf\n", result);
    printf("Actual sin(x) using math.h: %lf\n", sin(x));
    
    return 0;
}
