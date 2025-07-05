#include <iostream>
#include <climits>  // For INT_MIN
using namespace std;

int secondLargestInArray(int arr[], int n) {
    if (n < 2) return -1; // Not enough elements for second largest

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        return -1;
    else
        return second;
}
int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = secondLargestInArray(arr, n);
    
    if (secondLargest != -1) {
        cout << "The second largest element in the array is: " << secondLargest << endl;
    } else {
        cout << "There is no second largest element in the array." << endl;
    }
    
    return 0;
}