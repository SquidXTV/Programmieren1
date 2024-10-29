
#include <stdio.h>
#include <string.h>

void replaceCharInString(char str[], char target, char replacement) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == target) {
            str[i] = replacement;
        }
        i++;
    }
}

void copyString(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

void swapString(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0') {
        char temp = a[i];
        a[i] = b[i];
        b[i] = temp;
        i++;
    }
}

int isPalindrome(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    char str[] = "Hello";
    replaceCharInString(str, 'H', 'h');
    printf("Replace: %s\n", str);

    char dest[6];
    copyString(str, dest);
    printf("Copied: %s\n", dest);

    char a[] = "1.";
    char b[] = "2.";
    swapString(a, b);
    printf("First: %s\n", a);
    printf("Second: %s\n", b);

    printf("Is Palindrome: %d\n", isPalindrome("Hello World"));
    printf("Is Palindrome: %d\n", isPalindrome("rentner"));
    return 0;
}