#include <stdio.h>
#include <string.h>

// Find the longest palindromic substring of a string, e.g. "babad"
// contains "bab" (or "aba"), "cbbd" contains "bb", "racecar" is a
// palindrome by itself. The search expands around every possible
// centre (odd length: one centre character; even length: between two
// characters) and keeps the longest palindrome found.

void longestPalindromicSubstring(char str[], char result[])
{
    int n = strlen(str);
    int start = 0, maxLen = 0;

    for (int centre = 0; centre < n; centre++)
    {
        // Odd-length palindromes, centred on str[centre]
        int left = centre, right = centre;
        while (left >= 0 && right < n && str[left] == str[right])
        {
            if (right - left + 1 > maxLen)
            {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }

        // Even-length palindromes, centred between str[centre] and str[centre + 1]
        left = centre;
        right = centre + 1;
        while (left >= 0 && right < n && str[left] == str[right])
        {
            if (right - left + 1 > maxLen)
            {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }

    strncpy(result, str + start, maxLen);
    result[maxLen] = '\0';
}

int main()
{
    char str1[] = "babad";
    char str2[] = "cbbd";
    char str3[] = "racecar";
    char str4[] = "hello";
    char result[100];

    longestPalindromicSubstring(str1, result);
    printf("\"%s\" -> \"%s\"\n", str1, result);
    longestPalindromicSubstring(str2, result);
    printf("\"%s\" -> \"%s\"\n", str2, result);
    longestPalindromicSubstring(str3, result);
    printf("\"%s\" -> \"%s\"\n", str3, result);
    longestPalindromicSubstring(str4, result);
    printf("\"%s\" -> \"%s\"\n", str4, result);

    return 0;
}
