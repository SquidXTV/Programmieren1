#include <ctype.h>
#include <stdio.h>

int main(void) {
    int numbers = 0;
    int spaces = 0;
    int others = 0;

    // some consoles have problems inputting EOF
    for (int ch; (ch = getchar()) != EOF;) {
        if (ch == ' ') {
            spaces++;
        } else if (isdigit(ch)) {
            numbers++;
        } else {
            others++;
        }
    }

    printf("Numbers: %d\n", numbers);
    printf("Spaces: %d\n", spaces);
    printf("Others: %d\n", others);

    return 0;
}
