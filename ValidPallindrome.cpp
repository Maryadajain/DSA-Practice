#include <iostream>
#include <string>
using namespace std;

// Function to check if character is alphanumeric
bool isAlphaNum(char ch) {
    return (ch >= '0' && ch <= '9') || 
           (tolower(ch) >= 'a' && tolower(ch) <= 'z');
}

// Function to check if the string is a palindrome
bool isPalindrome(string s) {
    int st = 0, end = s.length() - 1;

    while (st < end) {
        if (!isAlphaNum(s[st])) {
            st++;
            continue;
        }
        if (!isAlphaNum(s[end])) {
            end--;
            continue;
        }
        if (tolower(s[st]) != tolower(s[end])) {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
