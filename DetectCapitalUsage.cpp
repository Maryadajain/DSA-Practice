#include<iostream>
#include<string>
using namespace std;

bool detectCapitalUse(string word){
    int n = word.size();
    if (n == 0) return false; // Empty string case
    if (n == 1) return true; // Single character is always valid
    int upperCount = 0;
    
    for (char c : word) {
        if (isupper(c)) upperCount++;
    }
    if (upperCount == n) return true; // All uppercase
    if (upperCount == 0) return true; // All lowercase
    if (upperCount == 1 && isupper(word[0])) return true; // First letter uppercase, rest lowercase

    return false; // Invalid usage of capitals
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    if (detectCapitalUse(word)) {
        cout << "The usage of capitals is correct." << endl;
    } else {
        cout << "The usage of capitals is incorrect." << endl;
    }

    return 0;
}