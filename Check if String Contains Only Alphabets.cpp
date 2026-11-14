#include <stdio.h>
#include <string.h>

// Check whether a string contains only alphabets (A-Z, a-z). Any
// digit, space or punctuation makes the answer No, and an empty
// string is also No (it contains no alphabets), e.g. "HelloWorld"
// -> Yes, "Hello123" -> No, "Hello World" -> No.

int onlyAlphabets(char str[])
{
    int i;
    if (str[0] == '\0')
        return 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= 'a' && str[i] <= 'z')))
            return 0;
    }
    return 1;
}

int main()
{
    char str1[] = "HelloWorld";
    char str2[] = "Hello123";
    char str3[] = "Hello World";
    char str4[] = "";

    printf("\"%s\" -> %s\n", str1, onlyAlphabets(str1) ? "Yes" : "No");
    printf("\"%s\" -> %s\n", str2, onlyAlphabets(str2) ? "Yes" : "No");
    printf("\"%s\" -> %s\n", str3, onlyAlphabets(str3) ? "Yes" : "No");
    printf("(empty) -> %s\n", onlyAlphabets(str4) ? "Yes" : "No");

    return 0;
}
