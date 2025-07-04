#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool isAnagram(string s, string t) { // for lower case char only
        if (s.size() != t.size()) return false;

        int count[26] = {0};

        for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) return false;
        }

        return true;
    }

bool isAnagram1(string s, string t) {  //for all char, upper, lower, unique
             if (s.length() != t.length()) return false;

        unordered_map<char, int> freq;

        for (char c : s) freq[c]++;
        for (char c : t) {
            freq[c]--;
            if (freq[c] < 0) return false;
        }

        return true;
    }



int main() {
    string s = "Maryada";   // First string
    string t = "Maryada";   // Second string
    bool result = isAnagram1(s, t);
    if (result) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}
    