// Check if a string is a valid email address (simple format check).
// A valid email has exactly one '@', a non-empty local part, and a domain
// with at least one dot where no part is empty and there are no spaces.
// Examples: "ali@gmail.com" and "sara.ahmed@yahoo.co.uk" are valid;
// "plainaddress", "ali@@gmail.com", "@gmail.com", "ali@gmail" and
// "ali@gmail." are not.

#include <stdio.h>
#include <string.h>

int isValidEmail(const char str[]) {
    int len = strlen(str);
    int atCount = 0, atPos = -1;

    for (int i = 0; i < len; i++) {
        if (str[i] == ' ' || str[i] == '\t') {
            return 0; // no spaces allowed
        }
        if (str[i] == '@') {
            atCount++;
            atPos = i;
        }
    }
    if (atCount != 1) {
        return 0; // must have exactly one '@'
    }
    if (atPos == 0 || atPos == len - 1) {
        return 0; // local part and domain must not be empty
    }
    // local part must not start or end with a dot
    if (str[0] == '.' || str[atPos - 1] == '.') {
        return 0;
    }
    // domain must contain a dot, not at its start or end
    int dotInDomain = 0;
    for (int i = atPos + 1; i < len; i++) {
        if (str[i] == '.') {
            dotInDomain = 1;
            if (i == atPos + 1 || i == len - 1) {
                return 0;
            }
        }
    }
    return dotInDomain;
}

int main() {
    const char *tests[] = {"ali@gmail.com", "sara.ahmed@yahoo.co.uk",
                           "plainaddress", "ali@@gmail.com", "@gmail.com",
                           "ali@gmail", "ali@gmail.", "ali @gmail.com"};
    int n = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < n; i++) {
        printf("\"%s\" -> %s\n", tests[i],
               isValidEmail(tests[i]) ? "Valid email" : "Not an email");
    }
    return 0;
}
