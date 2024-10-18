#include <stdio.h>

void diagonal(int n, char symbol) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == (n - i - 1)) {
                printf("%c", symbol);
            } else {
                printf("+");
            }
        }
        printf("\n");
    }
}

void cross(int n, char symbol) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == (n - i - 1) || i == j) {
                printf("%c", symbol);
            } else {
                printf("+");
            }
        }
        printf("\n");
    }
}

int main() {
    diagonal(3, 'o');
    printf("\n");
    cross(3, 'o');
    return 0;
}
