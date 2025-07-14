#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// ✅ Function to print and count unique elements
int countAndPrintUnique(const vector<int>& nums) {
    unordered_map<int, int> freq;

    // Step 1: Count frequency of each element
    for (int num : nums) {
        freq[num]++;
    }

    int uniqueCount = 0;

    cout << "Unique Elements: ";
    for (auto it : freq) {
        if (it.second == 1) {
            cout << it.first << " ";
            uniqueCount++;
        }
    }
    cout << endl;

    return uniqueCount;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};

    int result = countAndPrintUnique(arr);
    cout << "Count of unique elements: " << result << endl;

    return 0;
}
