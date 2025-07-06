#include<iostream>
#include<unordered_map>
using namespace std;

int countDuplicates(int arr[], int n) {
    unordered_map<int, int> freqMap;
    int count = 0;

    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    for (auto it : freqMap) {
        if (it.second > 1) {
            count++;
        }
    }

    return count;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int duplicateCount = countDuplicates(arr, n);
    cout << "Number of duplicate elements: " << duplicateCount << endl;

    return 0;
}