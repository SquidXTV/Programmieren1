#include <math.h>
#include <stdio.h>

int main() {
    int n = 3;

    int height = 2 * n - 1;

    for (int i = 0; i < height; ++i) {
        int m = abs(height - n - i);

        for (int j = 0; j < m; ++j) {
            printf("o");
        }

        for (int j = 0; j < height - 2 * m; ++j) {
            printf("+");
        }

        for (int j = 0; j < m; ++j) {
            printf("o");
        }

        printf("\n");
    }

    return 0;
}