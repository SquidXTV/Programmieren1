#include <math.h>
#include <stdio.h>

double surface(const float r) {
    return 4.0 * M_PI * pow(r, 2);
}

double volume(const float r) {
    return 4.0 / 3.0 * M_PI * pow(r, 3);
}

void output(const float r) {
    printf("r = %lf\n", r);
    printf("surface = %lf\n", surface(r));
    printf("volume = %lf\n", volume(r));
}

int main(void) {
    float r;
    do {
        printf("Enter positive radius: \n");
        scanf("%f", &r);
    } while (r < 0);

    output(r);
    return 0;
}
