// Check if a string is a valid number.
// A valid number has an optional leading + or -, digits, and at most one
// decimal point, with at least one digit somewhere. Examples: "123",
// "-45.67" and "+.5" are valid; "12a3", "12.34.56", "" and "-" are not.

#include <stdio.h>
#include <string.h>

int isValidNumber(const char str[]) {
    int i = 0, digits = 0, dots = 0;

    if (str[0] == '+' || str[0] == '-') {
        i = 1;
    }
    if (str[i] == '\0') {
        return 0; // only a sign, no digits
    }
    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] == '.') {
            dots++;
            if (dots > 1) {
                return 0;
            }
        } else {
            return 0; // any other character is invalid
        }
    }
    return digits > 0;
}

int main() {
    const char *tests[] = {"123", "-45.67", "+.5", "12a3",
                           "12.34.56", "", "-", "  12"};
    int n = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < n; i++) {
        printf("\"%s\" -> %s\n", tests[i],
               isValidNumber(tests[i]) ? "Valid number" : "Not a number");
    }
    return 0;
}
