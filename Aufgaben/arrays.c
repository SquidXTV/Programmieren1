#include <stdio.h>

void AddiereArrays(int ia[], int ib[], int ic[], const int n) {
    for (int i = 0; i < n; ++i) {
        ic[i] = ia[i] + ib[i];
    }
}

void PrintArrays(int ia[], const int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", ia[i]);
    }
    printf("\n");
}

int main(void) {
    int ia[5] = {5, 4, 3, 2, 1};
    int ib[5] = {1, 2, 3, 4, 5};
    int ic[5];
    AddiereArrays(ia, ib, ic, 5);

    PrintArrays(ic, 5);

    return 0;
}
