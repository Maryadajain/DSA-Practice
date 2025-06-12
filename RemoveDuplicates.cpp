#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if(n <= 1) {
        return n;  // No duplicates to remove
    }

    int i = 0;  // Pointer to place next unique element
    for(int j = 1; j < n; j++) {
        if(arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;  // New size of the array
}

int main() {
    int arr[] = {1, 1, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    n = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
