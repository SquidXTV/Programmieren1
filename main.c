#include <stdio.h>

void strPrint(const char *str) {
    printf("%s\n", str);
}

int strLen(const char *str) {
    int i = 0;
    while (*(str++) != '\0') {
        i++;
    }
    return i;
}

void strRevert(char *str) {
    const int length = strLen(str);
    char *end = str + length - 1;

    for (int i = 0; i < length / 2; ++i) {
        char temp = *str;
        *str = *end;
        *end = temp;

        str++;
        end--;
    }
}

int strCountVocals(const char *str) {
    int count = 0;
    char c;
    while ((c = *str++) != '\0') {
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
                count++;
        }
    }
    return count;
}

void swapCases(char *str) {
    char c;
    while ((c = *str) != '\0') {
        if (c >= 'A' && c <= 'Z') {
            *str = c + 32;
        } else if (c >= 'a' && c <= 'z') {
            *str = c - 32;
        }

        str++;
    }
}

void concat(const char *s1, const char *s2, char *target) {
    char c;
    while ((c = *s1++) != '\0') {
        *target++ = c;
    }

    while ((c = *s2++) != '\0') {
        *target++ = c;
    }

    *target = '\0';
}

int countSubstring(char *input, char *substring) {
    int count = 0;

    while (*input != '\0') {
        int add = 1;

        char *current = input;
        char *substringCurrent = substring;
        while (*substringCurrent != '\0') {
            if (*current == '\0' || *current != *substringCurrent) {
                add = 0;
                break;
            }

            current++;
            substringCurrent++;
        }

        count += add;
        input++;
    }

    return count;
}

int countSubstringReversed(char *input, char *substring) {
    int count = 0;
    const char *first = input;

    while (*input != '\0') {
        int add = 1;

        char *current = input;
        char *substringCurrent = substring;
        while (*substringCurrent != '\0') {
            if (*current != *substringCurrent || (current == first && *(substringCurrent + 1) != '\0')) {
                add = 0;
                break;
            }

            current--;
            substringCurrent++;
        }

        count += add;
        input++;
    }

    return count;
}

int main(void) {
    char *input = "HaLLoLLooLo";
    char substrings[4][4] = {"LL", "Lo", "LLo", "LoL"};
    printf("Input: %s\n", input);
    for (int i = 0; i < 4; ++i) {
        printf("Substring[%d]: %s found %d times.\n", i, substrings[i], countSubstring(input, substrings[i]));
    }

    input = "HaLLoLLoLLLooo";
    char substring[] = "oLL";
    printf("Substring reversed: %s found %d times.\n", substring, countSubstringReversed(input, substring));
    return 0;
}
