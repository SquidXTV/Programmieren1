#include <stdio.h>

int main(void) {
    int sum = 0;
    while (true) {
        printf("Gib eine Zahl ein:\n");

        int input;
        scanf("%d", &input);
        if (input == 0) {
            break;
        }

        sum += input;
    }

    printf("Die Summe ist %d.\n", sum);
    return 0;
}
