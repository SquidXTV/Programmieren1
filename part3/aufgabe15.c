#include <stdio.h>

double toEuro(double dm) {
    return dm * 0.51129;
}

int main(void) {
    while (true) {
        printf("Geben sie einen Wert in DM an:\n");

        double input;
        scanf("%lf", &input);

        if (input < 1000) {
            printf("Der Wert muss mindestens 1000 sein.\n");
        } else {
            printf("Der Wert %lf DM ist gleich %lf Euro.", input, toEuro(input));
            break;
        }
    }
    return 0;
}
