
#include <stdio.h>

void pascal(int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height - i - 1; ++j) {
            printf(" ");
        }


        int coef = 1;
        for (int j = 0; j < i; ++j) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("1\n");
    }
}

int main(void) {
    pascal(4);
    return 0;
}