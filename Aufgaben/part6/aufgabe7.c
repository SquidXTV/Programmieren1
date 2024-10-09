#include <stdio.h>

double scalar(const double x[11], const double y[11]) {
    double sum = 0;
    for (int i = 0; i < 11; i++) {
        sum += x[i] * y[i];
    }
    return sum;
}

int main() {
    double x[11] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
    double y[11] = { 3, 4, 11, 1, 1, 1, 1, 1, 21, 1, 1 };

    printf("The scalar is %lf\n", scalar(x, y));

    return 0;
}