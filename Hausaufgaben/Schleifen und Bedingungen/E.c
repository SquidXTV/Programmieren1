#include <stdio.h>

int main() {
    int number = 12345;
    printf("Zahl: %d\n", number);
    printf("Binary: ");
    for (int i = sizeof(int) * 8 - 1; i >= 0; --i) {
        printf("%d", (number >> i) & 1);
    }
    printf("\n");
    return 0;
}
