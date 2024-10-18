#include <stdio.h>

long double factorial(int n) {
    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main(void) {
    printf("%Lf\n", factorial(0));
    printf("%Lf\n", factorial(5));
    printf("%Lf\n", factorial(10));
    return 0;
}