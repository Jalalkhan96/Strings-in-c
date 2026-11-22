// Replace every occurrence of one character with another in a string.

#include <stdio.h>
#include <string.h>

void replaceChar(char str[], char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}

int main() {
    char text1[100] = "hello world";
    replaceChar(text1, 'l', 'x');
    printf("\"hello world\" with 'l' -> 'x': \"%s\"\n", text1);

    char text2[100] = "banana";
    replaceChar(text2, 'a', 'o');
    printf("\"banana\" with 'a' -> 'o': \"%s\"\n", text2);

    char text3[100] = "programming";
    replaceChar(text3, 'z', 'q'); // 'z' does not occur: unchanged
    printf("\"programming\" with 'z' -> 'q': \"%s\"\n", text3);
    return 0;
}
