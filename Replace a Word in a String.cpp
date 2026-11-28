// Replace a Word in a String - Replace every occurrence of a word in a
// sentence with another word.
#include <iostream>
#include <string>
using namespace std;

// Replaces every occurrence of oldWord with newWord in text.
string replaceWord(string text, const string &oldWord, const string &newWord) {
    if (oldWord.empty()) {
        return text;
    }
    size_t pos = 0;
    while ((pos = text.find(oldWord, pos)) != string::npos) {
        text.replace(pos, oldWord.length(), newWord);
        pos += newWord.length();
    }
    return text;
}

int main() {
    string sentence = "I love C programming and C is fast";
    cout << "Original: " << sentence << endl;
    cout << "Replace C with C++: "
         << replaceWord(sentence, "C", "C++") << endl;

    string text = "the cat sat on the mat";
    cout << "Original: " << text << endl;
    cout << "Replace cat with dog: "
         << replaceWord(text, "cat", "dog") << endl;
    cout << "Replace the with a: "
         << replaceWord(text, "the", "a") << endl;
    cout << "Replace fish with bird (not present): "
         << replaceWord(text, "fish", "bird") << endl;
    return 0;
}
