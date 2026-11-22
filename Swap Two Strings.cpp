// Swap two strings using a temporary buffer.

#include <stdio.h>
#include <string.h>

void swapStrings(char str1[], char str2[]) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main() {
    char first[100] = "hello";
    char second[100] = "world";

    printf("Before swap: first = \"%s\", second = \"%s\"\n", first, second);
    swapStrings(first, second);
    printf("After swap:  first = \"%s\", second = \"%s\"\n", first, second);

    char a[100] = "apple";
    char b[100] = "banana";
    swapStrings(a, b);
    printf("Swapped: a = \"%s\", b = \"%s\"\n", a, b);
    return 0;
}
