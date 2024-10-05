#include <stdio.h>

double toEuro(double dm) {
    return dm * 0.51129;
}

void user() {
    for (int i = 0; i < 10; i++) {
        double value;
        do {
            printf("Gib ein DM-Wert zwischen 1 bis 5 ein.\n");
            scanf("%lf", &value);
        } while (value < 1 || value > 5);
        printf("%lf DM -> %lf Euro\n", value, toEuro(value));
    }
}

void random() {

}

int main(void) {
    user();
    random();
    return 0;
}