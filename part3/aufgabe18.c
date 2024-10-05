#include <stdio.h>

void input(int *a, int *b) {
    printf("Enter a number:\n");
    scanf("%d",a);
    printf("Enter a second number:\n");
    scanf("%d",b);
}

void singleIf() {
    int a,b;
    input(&a,&b);

    int max = a;

    if (b > a) {
        max = b;
    }

    printf("Max number is: %d\n",max);
}

void ifElse() {
    int a,b;
    input(&a,&b);

    int max;
    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    printf("Max number is: %d\n", max);
}

int main(void) {
    singleIf();
    ifElse();
    return 0;
}
