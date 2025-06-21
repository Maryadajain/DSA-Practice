#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++) { // Start from the second element(unsorted part)
        int current = arr[i]; // Element to be inserted
        int prev = i - 1; // Index of the last element in the sorted part

        while (prev >= 0 && arr[prev] > current) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current; // Insert the key at the correct position
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, n);
    
    insertionSort(arr, n);
    
    cout << "Sorted array: ";
    printArray(arr, n);
    
    return 0;
}