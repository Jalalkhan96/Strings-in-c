// Remove All Whitespace from a String - Remove every whitespace character
// (spaces, tabs and newlines) from a string.
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

// Returns a copy of text with every whitespace character removed.
string removeWhitespace(const string &text) {
    string result;
    for (char ch : text) {
        if (!isspace(static_cast<unsigned char>(ch))) {
            result += ch;
        }
    }
    return result;
}

int main() {
    string text1 = "hello world from C";
    cout << "Original: \"" << text1 << "\"" << endl;
    cout << "Without whitespace: \"" << removeWhitespace(text1) << "\"" << endl;

    string text2 = "a\tb\nc d";
    cout << "Original: \"a\\tb\\nc d\"" << endl;
    cout << "Without whitespace: \"" << removeWhitespace(text2) << "\"" << endl;

    string text3 = "  hello   world  ";
    cout << "Original: \"" << text3 << "\"" << endl;
    cout << "Without whitespace: \"" << removeWhitespace(text3) << "\"" << endl;

    string text4 = "nowhitespace";
    cout << "Original: \"" << text4 << "\"" << endl;
    cout << "Without whitespace: \"" << removeWhitespace(text4) << "\"" << endl;
    return 0;
}
