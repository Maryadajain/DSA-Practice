#include<iostream>
using namespace std;

int findUnique(int arr[], int n) {
    int unique = 0;
    for (int i = 0; i < n; i++) {
        unique ^= arr[i]; // XOR operation
    }
    return unique;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int uniqueElement = findUnique(arr, n);
    cout << "The unique element is: " << uniqueElement << endl;

    return 0;
}