#include <stdlib.h>
#include <string.h>

int strLen(const char* str) {
    int count = 0;
    while (*str != '\0') {
        str++;
        count++;
    }
    return count;
}

int countCharacter(const char* str, const char target) {
    int count = 0;
    while (*str != '\0') {
        if (*str == target) {
            count++;
        }
    }
    return count;
}

int countVocals(const char* str) {
    int count = 0;
    while (*str != '\0') {
        switch (*str) {
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
        str++;
    }
}

void replaceCharacter(char* str, const char target, const char replacement) {
    while (*str != '\0') {
        if (*str == target) {
            *str = replacement;
        }
        str++;
    }
}

void swapCases(char* str) {
    char current;
    while ((current = *str) != '\0') {
        if (current >= 'A' && current <= 'Z') {
            *str = current + 32;
        } else if (current >= 'a' && current <= 'z') {
            *str = current - 32;
        }

        str++;
    }
}

char* concat(const char* str1, const char* str2) {
    char* result = malloc(sizeof(char) * (strlen(str1) + strlen(str2) + 1));
    while (*str1 != '\0') {
        *result = *str1;
        result++;
        str1++;
    }
    while (*str2 != '\0') {
        *result = *str2;
        result++;
        str2++;
    }
    *result = '\0';
    return result;
}

// 0: doesnt contain
// 1: contains target
int contains(char* str, char* target) {
    while (*str != '\0') {
        int different = 0;
        char* current = str;
        char* currentTarget = target;
        while (*current != '\0') {
            if (*current != *currentTarget) {
                different = 1;
                break;
            }
            current++;
            currentTarget++;
        }

        if (different == 0) {
            return 1;
        }

        str++;
    }
    return 0;
}

int main(void) {
    return 0;
}
