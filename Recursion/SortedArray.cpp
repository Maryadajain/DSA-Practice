#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr, int n){
    if(n == 0 || n == 1) {
        return true; // Base case
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1); // Recursive call for the rest of the array
}
int main() {
    vector<int> arr = {1, 2, 9, 4, 5}; 
    int n = arr.size();
    
    if(isSorted(arr, n)) {
        cout << "Array is sorted." << endl; 
    } else {
        cout << "Array is not sorted." << endl; 
    }
    return 0; 
}