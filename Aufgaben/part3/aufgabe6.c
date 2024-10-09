#include <math.h>
#include <stdio.h>

double surface(const double r) {
    return 4.0 * M_PI * pow(r, 2);
}

double volume(const double r) {
    return 4.0/3.0 * M_PI * pow(r, 3);
}

void output(const double r) {
    printf("r = %lf\n", r);
    printf("surface = %lf\n", surface(r));
    printf("volume = %lf\n", volume(r));
}

int main(void) {
    output(2);
    printf("---\n");
    output(2.5);
    printf("---\n");
    output(3);
    return 0;
}