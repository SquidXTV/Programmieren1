#include <stdio.h>

void ifElse(const char ch) {
    if (ch == 'a') {
        printf("Du hast 'a' eingegeben.\n");
    } else if (ch == 'b') {
        printf("Du hast 'b' eingegeben.\n");
    } else if (ch == 'c') {
        printf("Du hast 'c' eingegeben.\n");
    } else {
        printf("Du hast etwas anderes eingegeben.\n");
    }
}

void switchCase(const char ch) {
    switch (ch) {
        case 'a':
            printf("Du hast 'a' eingegeben.\n");
            break;
        case 'b':
            printf("Du hast 'b' eingegeben.\n");
            break;
        case 'c':
            printf("Du hast 'c' eingegeben.\n");
            break;
        default:
            printf("Du hast etwas anderes eingegeben.\n");
    }
}

int main(void) {
    for (int i = 0; i < 5; ++i) {
        printf("Gib ein Buchstaben ein:\n");
        char ch;
        scanf(" %c", &ch);
        switchCase(ch);
    }
    return 0;
}
