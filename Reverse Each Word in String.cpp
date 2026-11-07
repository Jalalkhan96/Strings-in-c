#include <stdio.h>
#include <string.h>

// Reverse each word in a string, keeping the word order, e.g.
// "hello world from C" -> "olleh dlrow morf C"
// Each word is reversed in place; spaces stay where they are.

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

void reverseEachWord(char str[])
{
    int len = strlen(str);
    int start = 0, end;
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

    reverseEachWord(str);

    printf("Each word reversed: %s\n", str);
    return 0;
}
