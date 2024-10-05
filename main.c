#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a;

    scanf("%d",&a);

    if (a > 5)
        if (a < 10)
            printf("a < 10");
    else
        printf("a < 5");

    return 0;
}
