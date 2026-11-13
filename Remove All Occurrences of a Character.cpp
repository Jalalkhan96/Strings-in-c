#include <stdio.h>
#include <string.h>

// Remove every occurrence of a given character from a string, e.g.
// removing 'l' from "hello world" gives "heo word", and removing 'a'
// from "banana" gives "bnn".

void removeChar(char str[], char ch)
{
    int write = 0;

    for (int read = 0; str[read] != '\0'; read++)
    {
        if (str[read] != ch)
            str[write++] = str[read];
    }
    str[write] = '\0';
}

int main()
{
    char str1[] = "hello world";
    char str2[] = "banana";
    char str3[] = "programming";

    removeChar(str1, 'l');
    printf("Removing 'l' from \"hello world\": %s\n", str1);

    removeChar(str2, 'a');
    printf("Removing 'a' from \"banana\": %s\n", str2);

    removeChar(str3, 'm');
    printf("Removing 'm' from \"programming\": %s\n", str3);

    return 0;
}
