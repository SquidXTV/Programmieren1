
#include <stdio.h>

int main(void) {
    int sum = 0;
    for (int i = 0; i <= 100; ++i) {
        sum += i;
    }

    printf("Summe der ersten hundert positiven Zahlen ist %d.\n", sum);
    return 0;
}
