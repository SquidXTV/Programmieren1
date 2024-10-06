#include <stdio.h>

int gcd(const int a, const int b) {
    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

int main() {
    int a, b;

    printf("Gib die erste Zahl ein:\n");
    scanf("%d", &a);

    printf("Gib die zweite Zahl ein:\n");
    scanf("%d", &b);

    printf("Der groesste gemeinsame Teiler ist %d.\n", gcd(a, b));
    return 0;
}
