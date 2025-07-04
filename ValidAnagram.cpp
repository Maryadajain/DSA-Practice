#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
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
int main() {
    string s = "Maryada";   // First string
    string t = "Maryaada";   // Second string
    bool result = isAnagram(s, t);
    if (result) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}
    