// Sort the words of a sentence by length, shortest first.
// Ties keep their original order (stable sort).
// Example: "the quick brown fox jumps" becomes
// "the fox quick brown jumps".

#include <stdio.h>
#include <string.h>

#define MAX_WORDS 50
#define MAX_WORD_LEN 50

void sortWordsByLength(char str[]) {
    char words[MAX_WORDS][MAX_WORD_LEN];
    int count = 0;
    int len = strlen(str);

    // split the sentence into words (single spaces separate them)
    int i = 0;
    while (i < len) {
        while (i < len && str[i] == ' ') {
            i++;
        }
        if (i >= len) {
            break;
        }
        int start = i;
        while (i < len && str[i] != ' ') {
            i++;
        }
        int wordLen = i - start;
        if (count < MAX_WORDS && wordLen < MAX_WORD_LEN) {
            strncpy(words[count], str + start, wordLen);
            words[count][wordLen] = '\0';
            count++;
        }
    }

    // stable insertion sort by word length (shortest first)
    for (int j = 1; j < count; j++) {
        char key[MAX_WORD_LEN];
        strcpy(key, words[j]);
        int k = j - 1;
        while (k >= 0 && strlen(words[k]) > strlen(key)) {
            strcpy(words[k + 1], words[k]);
            k--;
        }
        strcpy(words[k + 1], key);
    }

    for (int j = 0; j < count; j++) {
        printf("%s", words[j]);
        if (j < count - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    char s1[] = "the quick brown fox jumps";
    printf("Original: %s\nSorted:   ", s1);
    sortWordsByLength(s1);

    char s2[] = "I love programming in C";
    printf("Original: %s\nSorted:   ", s2);
    sortWordsByLength(s2);

    char s3[] = "one two three four";
    printf("Original: %s\nSorted:   ", s3);
    sortWordsByLength(s3);
    return 0;
}
