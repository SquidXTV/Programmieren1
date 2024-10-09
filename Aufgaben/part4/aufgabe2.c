#include <math.h>
#include <stdio.h>

int main(void) {
    int input;
    printf("Gib eine Zahl zwischen 1 und 14 ein:\n");
    scanf("%d", &input);

    switch (input) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
        case 13:
            printf("Die Wurzel der Zahl %d ist %lf.\n", input, sqrt(input));
            break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
        case 14:
            printf("Das quadrat der Zahl %d ist %lf.\n", input, pow(input, 2));
            break;
        default:
            printf("Fehler: Die Zahl ist nicht zwischen 1 und 14.");
    }
    return 0;
}
