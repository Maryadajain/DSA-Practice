#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n) { //O(n^2) time complexity, O(1) space complexity
    bool isSwap = false; // Flag to check if any swap happened
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1] or swap(arr[j],arr[j + 1]);
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSwap = true; // Set the flag to true if a swap occurred
            }
        }
        if(!isSwap){ // If no swap happened in the inner loop, the array is sorted
            return;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    
    cout << "Original array: ";
    printArray(arr, n);
    
    bubbleSort(arr, n);
    
    cout << "Sorted array: ";
    printArray(arr, n);
    
    return 0;
}