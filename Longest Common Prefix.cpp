// Find the longest common prefix of two strings.
// The prefix is the longest run of equal characters from the start of both
// strings. Examples: "flower" and "flow" share "flo", "interspecies" and
// "interstellar" share "inters", "dog" and "car" share nothing.

#include <stdio.h>
#include <string.h>

void longestCommonPrefix(const char str1[], const char str2[], char result[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        result[i] = str1[i];
        i++;
    }
    result[i] = '\0';
}

int main() {
    const char *pairs[][2] = {{"flower", "flow"},
                              {"interspecies", "interstellar"},
                              {"dog", "car"},
                              {"hello", "hello"},
                              {"", "abc"}};
    int n = sizeof(pairs) / sizeof(pairs[0]);
    char result[100];

    for (int i = 0; i < n; i++) {
        longestCommonPrefix(pairs[i][0], pairs[i][1], result);
        printf("\"%s\" + \"%s\" -> \"%s\"\n", pairs[i][0], pairs[i][1], result);
    }
    return 0;
}
