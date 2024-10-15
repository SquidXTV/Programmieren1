#include <stdio.h>

long double e(const int limit) {
    long double factorial = 1.0L;
    long double sum = 1.0L;

    for (int i = 1; i <= limit; i++) {
        factorial *= i;
        sum += (1.0L / factorial);
    }

    return sum;
}

int main() {
    printf("e = %Lf", e(1754));
    return 0;
}
