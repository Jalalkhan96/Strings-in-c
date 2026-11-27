// Replace every space in a string with an underscore.
// Example: "hello world from C" becomes "hello_world_from_C".

#include <stdio.h>
#include <string.h>

void replaceSpacesWithUnderscores(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '_';
        }
    }
}

int main() {
    char s1[] = "hello world from C";
    replaceSpacesWithUnderscores(s1);
    printf("\"hello world from C\" -> \"%s\"\n", s1);

    char s2[] = "no spaces here";
    replaceSpacesWithUnderscores(s2);
    printf("\"no spaces here\" -> \"%s\"\n", s2);

    char s3[] = "  leading and trailing  ";
    replaceSpacesWithUnderscores(s3);
    printf("\"  leading and trailing  \" -> \"%s\"\n", s3);

    char s4[] = "alreadyclean";
    replaceSpacesWithUnderscores(s4);
    printf("\"alreadyclean\" -> \"%s\"\n", s4);
    return 0;
}
