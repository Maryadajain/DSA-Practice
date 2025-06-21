#include<iostream>
using namespace std;
void sortDNF012(int arr[], int n){  // O(n) time complexity, O(1) space complexity , Single pass
    int low =0, mid = 0, high = n-1;
    while(mid <= high){
        if(arr[mid]==0){ //0
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if(arr[mid]==1){ //1
            mid++;
        } else { //2
            swap(arr[mid], arr[high]);
            high--;
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
    int arr[] = {2, 0, 1, 2, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, n);
    
    sortDNF012(arr, n);
    
    cout << "Sorted array: ";
    printArray(arr, n);
    
    return 0;
}