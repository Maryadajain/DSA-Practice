#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>  // For tolower()
using namespace std;

void countCharacterFrequency(const string& str) {
    unordered_map<char, int> freq;

    for (char ch : str) {
        if (isalpha(ch)) {                 // Count only alphabetic characters
            ch = tolower(ch);              // Convert to lowercase
            freq[ch]++;
        }
    }

    // Print frequencies
    for (auto pair : freq) {
        cout << pair.first << " → " << pair.second << endl;
    }
}

int main() {
    string s = "Frequency Analyzer FOR Char Count";
    countCharacterFrequency(s);
    return 0;
}
