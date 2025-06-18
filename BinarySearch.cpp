#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> &nums, int target){    //Iterative Binary Search
    int start = 0, end = nums.size() - 1;
    while(start <= end){
        int mid = start + (end - start) / 2; //Optimized mid calculation to avoid overflow
        if(nums[mid] == target){
            return mid; // Target found
        }
        else if(nums[mid] < target){
            start = mid + 1; // Search in the right half
        }
        else{
            end = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int target = 9;
    int result = binarySearch(nums, target);
    
    if(result != -1){
        cout << "Target found at index: " << result << endl;
    }
    else{
        cout << "Target not found." << endl;
    }
    
    return 0;
}