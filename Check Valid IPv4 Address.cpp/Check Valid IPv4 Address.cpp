// Check if a string is a valid IPv4 address (simple format check).
// A valid IPv4 address has exactly four parts separated by dots, each part
// a decimal number from 0 to 255 with no leading zeros (except "0" itself)
// and no spaces. Examples: "192.168.1.1" and "0.0.0.0" are valid;
// "256.100.50.25", "192.168.01.1", "192.168.1" and "192.168.1.1.1" are not.

#include <stdio.h>
#include <string.h>

int isValidIPv4(const char str[]) {
    int len = strlen(str);
    if (len == 0) {
        return 0;
    }
    int parts = 0;
    int i = 0;
    while (i < len) {
        // each part must start with a digit
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
        int start = i;
        int value = 0;
        while (i < len && str[i] >= '0' && str[i] <= '9') {
            value = value * 10 + (str[i] - '0');
            if (value > 255) {
                return 0; // part out of range
            }
            i++;
        }
        // no leading zeros: "01" or "00" is invalid, "0" is fine
        if (i - start > 1 && str[start] == '0') {
            return 0;
        }
        parts++;
        if (i == len) {
            break;
        }
        if (str[i] != '.') {
            return 0; // only dots separate the parts
        }
        i++; // skip the dot
        if (i == len) {
            return 0; // address must not end with a dot
        }
    }
    return parts == 4;
}

int main() {
    const char *tests[] = {"192.168.1.1", "0.0.0.0", "255.255.255.255",
                           "256.100.50.25", "192.168.01.1", "192.168.1",
                           "192.168.1.1.1", "192.168.1.a", "192.168.1.1 ",
                           ""};
    int n = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < n; i++) {
        printf("\"%s\" -> %s\n", tests[i],
               isValidIPv4(tests[i]) ? "Valid IPv4" : "Not an IPv4 address");
    }
    return 0;
}
