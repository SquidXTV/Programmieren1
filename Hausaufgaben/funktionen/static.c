#include <stdio.h>

int summiere(int a) {
    static int sum = 0;

    sum += a;

    return sum;
}

int main(void) {
    printf("%d\n", summiere(10));
    printf("%d\n", summiere(20));
    printf("%d\n", summiere(30));
    printf("%d\n", summiere(40));

    return 0;
}