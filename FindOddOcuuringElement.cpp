#include <iostream>
#include <vector>
using namespace std;

int findOddOccurringElement(const vector<int>& arr) {
    int result = 0;
    for (int num : arr) {
        result ^= num;  // XOR each number
    }
    return result;
}
int main() {
    vector<int> arr = {2, 3, 2, 4, 4, 3, 5, 5, 6};
    cout << "Odd occurring element: " << findOddOccurringElement(arr) << endl;
    return 0;
}
