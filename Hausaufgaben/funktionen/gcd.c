
#include <stdio.h>

int gcd(int a, int b) {
    if (a % b == 0) {
        return b;
    }

    return gcd(b, a % b);
}

int gcd_iterative(int a, int b) {
    while (a % b != 0) {
        int swap = a;
        a = b;
        b = swap % b;
    }

    return b;
}

int main(void) {
    printf("%d\n", gcd_iterative(180, 18));
    printf("%d\n", gcd(180, 18));
    return 0;
}
