#include <stdio.h>

int main() {
    for (int i = 'A'; i <= 'Z'; ++i) {
        switch (i) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c\n", i);
                break;
            default:
                printf("%c\n", i + 32);
        }
    }

    return 0;
}
