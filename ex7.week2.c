#include <stdio.h>

int collatz(int n) {
    int count = 1;
    while (n != 1) {
        printf("%d ", n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        count++;
    }
    printf("%d\n", n);
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    int length = collatz(n);
    printf("%d\n", length);
    return 0;
}
