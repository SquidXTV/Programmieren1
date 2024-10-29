#include <stdio.h>

void strPrint(char str[]) {
    printf("%s\n", str);
}

int strLen(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void strRevert(char str[]) {
    int length = strLen(str);
    for (int i = 0; i < length / 2; ++i) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int strCountVocals(char str[]) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        switch (str[i]) {
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
        i++;
    }

    return count;
}

void strSwapCases(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        char c = str[i];
        if (c >= 'A' && c <= 'Z') {
            printf("%c", c + 32);
        } else if (c >= 'a' && c <= 'z') {
            printf("%c", c - 32);
        } else {
            printf("%c", c);
        }
        i++;
    }
    printf("\n");
}

void strConcat(char str1[], char str2[], char str3[]) {
    int i = 0;
    while (str1[i] != '\0') {
        str3[i] = str1[i];
        i++;
    }

    int j = 0;
    while (str2[j] != '\0') {
        str3[i] = str2[j];
        i++;
        j++;
    }

    str3[i] = '\0';
}

int main(void) {
    strPrint("hello");
    printf("Length: %d\n", strLen("hello"));
    char test[] = "Hello";
    strRevert(test);
    printf("%s\n", test);
    printf("Number of vocals: %d\n", strCountVocals("hello"));
    strSwapCases("heLLo");
    char storage[11];
    strConcat("Hello", "World", storage);
    printf("%s\n", storage);
    return 0;
}
