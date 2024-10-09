#include <stdio.h>

long double e(int limit) {
    unsigned long long int factorial = 1;
    long double sum = 1;
    for (int i = 1; i <= limit; i++) {
        factorial *= i;
        sum += (1.0L / factorial);
    }

    return sum;
}

int main() {
    printf("e = %Lf", e(65));
  return 0;
}