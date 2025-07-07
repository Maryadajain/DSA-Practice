#include<iostream>
#include<vector>
using namespace std;

    int binSearch(vector<int>& arr, int tar, int st, int end){
        if(st<=end){
            int mid = st + (end - st)/2;

            if(arr[mid] == tar) return mid;
            else if(arr[mid] <= tar){
                return binSearch(arr, tar, mid+1, end);
            }
            else{
                return binSearch(arr, tar, st, mid-1);
            }
        }
        return -1;
    }

    int search(vector<int>& arr, int tar) {
        return binSearch(arr, tar, 0, arr.size()-1);
        
    }
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 5;
    int result = search(arr, target);
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }
    
    return 0;
}