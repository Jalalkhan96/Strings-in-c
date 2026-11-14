#include <stdio.h>
#include <string.h>

// Toggle the case of every letter in a string: uppercase becomes
// lowercase and lowercase becomes uppercase. Digits, spaces and
// punctuation are left unchanged, e.g. "Hello World" -> "hELLO wORLD"
// and "C Programming 101!" -> "c pROGRAMMING 101!".

void toggleCase(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A');
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
    }
}

int main()
{
    char str1[] = "Hello World";
    char str2[] = "C Programming 101!";
    char str3[] = "AbCdEf 123";

    toggleCase(str1);
    toggleCase(str2);
    toggleCase(str3);

    printf("\"Hello World\" -> \"%s\"\n", str1);
    printf("\"C Programming 101!\" -> \"%s\"\n", str2);
    printf("\"AbCdEf 123\" -> \"%s\"\n", str3);

    return 0;
}
