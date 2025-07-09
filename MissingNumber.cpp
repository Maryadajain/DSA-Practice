#include<iostream>
using namespace std;
int findMissingNumber(int arr[], int n) {
    int total = (n * (n + 1)) / 2; // Sum of first n natural numbers
    int sum = 0;
    
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i]; // Calculate the sum of the array elements
    }
    //cout<< total;
    //cout<< sum;
    return total - sum; // The missing number is the difference
}
int main() {
    int arr[] = {1, 2, 4, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]) + 1; // Size of the array + 1 for the missing number
    
    int missingNumber = findMissingNumber(arr, n);
    
    cout << "The missing number is: " << missingNumber << endl;
    
    return 0;
}