#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char b[] = "ABCDEFGHIJKLMNOPQRST";
    int c[6][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    };

    int a5 = a[4];
    char b5 = b[4];
    int *c5 = c[5];

    return 0;
}
