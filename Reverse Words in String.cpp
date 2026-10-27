#include <stdio.h>
#include <string.h>

// Reverse the order of words in a string, e.g.
// "hello world from C" -> "C from world hello"
// Words are separated by single spaces; the string itself is reversed
// in place, then each word is reversed back.

void reverseRange(char str[], int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWords(char str[])
{
    int len = strlen(str);
    int start, end;

    reverseRange(str, 0, len - 1);

    start = 0;
    for (end = 0; end <= len; end++)
    {
        if (str[end] == ' ' || str[end] == '\0')
        {
            reverseRange(str, start, end - 1);
            start = end + 1;
        }
    }
}

int main()
{
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    reverseWords(str);

    printf("Reversed words: %s\n", str);
    return 0;
}
