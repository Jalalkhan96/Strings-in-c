// Find First Vowel in a String - Find the first vowel in a string and
// its position.
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

// Returns the index of the first vowel in text, or -1 if there is none.
int firstVowelIndex(const string &text) {
    for (size_t i = 0; i < text.length(); i++) {
        if (isVowel(text[i])) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

void showFirstVowel(const string &text) {
    int index = firstVowelIndex(text);
    cout << "String: \"" << text << "\" -> ";
    if (index == -1) {
        cout << "No vowel found" << endl;
    } else {
        cout << "First vowel '" << text[index] << "' at index " << index
             << endl;
    }
}

int main() {
    showFirstVowel("hello");
    showFirstVowel("rhythm");
    showFirstVowel("BCDFG aeiou");
    showFirstVowel("Programming");
    showFirstVowel("sky");
    return 0;
}
