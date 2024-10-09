#include <stdio.h>

int main() {
    int n = 5;

    // for (int i = 0; i < n; ++i) {
    //     for (int j = n-1; j >= 0; --j) {
    //         if (i == j) {
    //             printf("o");
    //         } else {
    //             printf("+");
    //         }
    //     }
    //     printf("\n");
    // }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            printf("+");
        }

        printf("o");

        for (int j = 0; j < i; ++j) {
            printf("+");
        }

        printf("\n");
    }
    return 0;
}