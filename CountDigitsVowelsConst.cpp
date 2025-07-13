#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void solve(string str, int length) {
    int vowels = 0, consonants = 0, digits = 0;

    //all characters to lowercase
    for (int i = 0; i < length; i++) {
        str[i] = tolower(str[i]);
    }

    // Count character types
    for (int i = 0; i < length; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u') {
            vowels++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            consonants++;
        } else if (isdigit(str[i])) {
            digits++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);  // read full line including spaces

    int len = input.length();
    solve(input, len);

    return 0;
}
