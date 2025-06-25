#include <iostream>
#include <string>
#include <algorithm>  // for reverse()

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";

        // Step 1: Reverse the entire string
        reverse(s.begin(), s.end());

        // Step 2: Traverse the reversed string word by word
        for(int i = 0; i < n; i++) {
            string word = "";

            // Skip spaces
            while(i < n && s[i] == ' ') {
                i++;
            }

            // Extract the word
            while(i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Reverse the word to correct its original orientation
            reverse(word.begin(), word.end());

            // Append the word to the result string if it's not empty
            if(word.length() > 0) {
                ans += " " + word;
            }
        }

        // Remove the leading space
        return ans.substr(1);
    }
};

int main() {
    Solution sol;
    string input;
    
    cout << "Enter a sentence: ";
    getline(cin, input);  // Read input string with spaces

    string result = sol.reverseWords(input);
    cout << "Reversed word order: " << result << endl;

    return 0;
}
