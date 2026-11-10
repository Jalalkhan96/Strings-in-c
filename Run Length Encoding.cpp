#include <stdio.h>
#include <string.h>

// Compress a string with run-length encoding: each run of the same
// character is replaced by the character followed by its count,
// e.g. "aaabbbcc" becomes "a3b3c2" and "hello" becomes "h1e1l2o1".

void runLengthEncode(char str[], char result[])
{
    int len = strlen(str);
    int j = 0;

    for (int i = 0; i < len; i++)
    {
        int count = 1;
        while (i + 1 < len && str[i] == str[i + 1])
        {
            count++;
            i++;
        }
        result[j++] = str[i];
        j += sprintf(result + j, "%d", count);
    }
    result[j] = '\0';
}

int main()
{
    char str[200];
    char result[400];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    runLengthEncode(str, result);

    printf("Original:   %s\n", str);
    printf("Compressed: %s\n", result);

    return 0;
}
