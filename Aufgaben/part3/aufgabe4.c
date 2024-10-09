#include <stdio.h>

void twoInts() {
    int a, b;
    printf("Please enter two integers:\n");
    scanf("%d\n%d", &a, &b);

    const int sum = a + b;
    const int product = a * b;
    printf("The sum is: %d\n", sum);
    printf("The product is: %d\n", product);
}

void twoFloats() {
    float a, b;
    printf("Please enter two floats:\n");
    scanf("%f\n%f", &a, &b);

    const float sum = a + b;
    const float product = a * b;
    printf("The sum is: %f\n", sum);
    printf("The product is: %f\n", product);
}

int main(void) {
    twoInts();
    twoFloats();
    return 0;
}
