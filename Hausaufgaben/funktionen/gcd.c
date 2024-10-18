
#include <stdio.h>

int gcd(int a, int b) {
    if (a % b == 0) {
        return b;
    }

    gcd(b, a % b);
}

void gcd_iterative(int a, int b) {
    while (a % b != 0) {
        int swap = a;
        a = b;
        b = swap % b;
    }

    printf("%d\n", b);
}

int main(void) {
    gcd_iterative(180, 18);
    printf("%d\n", gcd(180, 18));
    return 0;
}
