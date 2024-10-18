#include <math.h>
#include <stdio.h>

void diamond(int n) {
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

    // for (int i = 0; i < height; ++i) {
    //     int empty = abs(height - n - i); // Anzahl von 'o' für Zeile i
    //
    //     for (int j = 0; j < height; ++j) {
    //         if (j < empty || j > height - 1 - empty) {
    //             printf("o");
    //         } else {
    //             printf("+");
    //         }
    //     }
    //
    //     printf("\n");
    // }


}

int main() {
    diamond(3);
    printf("\n");
    return 0;
}