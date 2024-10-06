#include <stdio.h>

bool isConsonant(const char c) {
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return false;
        default:
            return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
    }
}

int main(void) {
    while (true) {
        char input;
        printf("Gib ein Zeichen ein:\n");
        scanf(" %c", &input);

        if (input == 's' || input == 'S') {
            break;
        }

        if (isConsonant(input)) {
            fprintf(stderr, "Fehler: Konsonant %c ist nicht erlaubt.\n", input);
        } else {
            printf("Letzte eingegebene Zeichen ist %c.\n", input);
        }
    }
    return 0;
}
