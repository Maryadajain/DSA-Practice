#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // Helper function to compare two frequency arrays
    bool isFreqSame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    // Main function to check inclusion
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};  // Frequency array for s1

        // Build frequency array for s1
        for (char ch : s1) {
            freq[ch - 'a']++;
        }

        int windSize = s1.length();
        int s2Len = s2.length();

        // Loop through s2 with window of size equal to s1
        for (int i = 0; i <= s2Len - windSize; i++) {
            int windFreq[26] = {0};  // Frequency for current window

            // Build frequency array for current window in s2
            for (int j = 0; j < windSize; j++) {
                windFreq[s2[i + j] - 'a']++;
            }

            // Compare both frequencies
            if (isFreqSame(freq, windFreq)) {
                return true;
            }
        }

        return false;
    }
};

// Driver code to test the function
int main() {
    Solution sol;
    string s1, s2;

    cout << "Enter s1: ";
    cin >> s1;

    cout << "Enter s2: ";
    cin >> s2;

    if (sol.checkInclusion(s1, s2)) {
        cout << "A permutation of s1 is present in s2." << endl;
    } else {
        cout << "No permutation of s1 is present in s2." << endl;
    }

    return 0;
}
