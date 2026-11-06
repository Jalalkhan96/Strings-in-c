#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Check whether a string is a palindrome: it reads the same forwards
// and backwards, e.g. "madam" is a palindrome, "hello" is not.
// The comparison ignores case and spaces, so "nurses run" counts too.

int isPalindrome(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        while (left < right && str[left] == ' ')
            left++;
        while (left < right && str[right] == ' ')
            right--;

        if (tolower((unsigned char)str[left]) != tolower((unsigned char)str[right]))
            return 0;

        left++;
        right--;
    }
    return 1;
}

int main()
{
    char str1[] = "madam";
    char str2[] = "hello";
    char str3[] = "nurses run";

    printf("\"%s\" -> %s\n", str1, isPalindrome(str1) ? "Palindrome" : "Not a palindrome");
    printf("\"%s\" -> %s\n", str2, isPalindrome(str2) ? "Palindrome" : "Not a palindrome");
    printf("\"%s\" -> %s\n", str3, isPalindrome(str3) ? "Palindrome" : "Not a palindrome");

    return 0;
}
