// Convert a snake_case string to camelCase.
// Each '_' is removed and the letter after it is capitalised; the first
// letter stays as it is. Examples: "hello_world" -> "helloWorld",
// "convert_snake_case_to_camel_case" -> "convertSnakeCaseToCamelCase".

#include <stdio.h>
#include <string.h>

void snakeToCamel(const char str[], char result[]) {
    int j = 0;
    int capitalizeNext = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '_') {
            capitalizeNext = 1;
        } else if (capitalizeNext && str[i] >= 'a' && str[i] <= 'z') {
            result[j++] = str[i] - 'a' + 'A';
            capitalizeNext = 0;
        } else {
            result[j++] = str[i];
            capitalizeNext = 0;
        }
    }
    result[j] = '\0';
}

int main() {
    const char *tests[] = {"hello_world", "convert_snake_case_to_camel_case",
                           "single", "a_b_c", "hello__world",
                           "user_name_2"};
    int n = sizeof(tests) / sizeof(tests[0]);
    char result[100];

    for (int i = 0; i < n; i++) {
        snakeToCamel(tests[i], result);
        printf("\"%s\" -> \"%s\"\n", tests[i], result);
    }
    return 0;
}
