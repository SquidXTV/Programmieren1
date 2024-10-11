#include <stdio.h>

int main() {
    for (int i = 0; i < 256; ++i) {
        if (i % 16 == 0) {
            printf("\n");
        }
        printf("%c ", i);
    }
    return 0;
}