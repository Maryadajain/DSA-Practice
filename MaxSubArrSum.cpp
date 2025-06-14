#include<iostream>
#include<vector>
#include<climits>

using namespace std;
int maxSubArraySum(vector<int>& arr){     // brute force approach   time complexity O(n^2)
    int maxSum = INT_MIN;
    for(int start= 0; start< arr.size(); start++){
        int currentSum = 0;
        for(int end = start; end < arr.size(); end++){
            currentSum += arr[end];
            maxSum = max(maxSum, currentSum);
        }
    }
    return maxSum;
}

// Optimized approach using Kadane's algorithm   time complexity O(n)

int maxSubArraySumKadane(vector<int> & arr){
    int maxxSum=INT_MIN, currentSum=0;
    for(int i=0; i<arr.size(); i++){
        currentSum += arr[i];
        if(currentSum > maxxSum){
            maxxSum = currentSum;
        }
        if(currentSum < 0){
            currentSum = 0; // reset current sum if it goes negative
        }
    }
    return maxxSum;
}


int main(){
    vector<int> arr = {-2,1,-3,-1,2,1,-5};
    cout << "Maximum Subarray Sum: " << maxSubArraySumKadane(arr) << endl; // Output: 6
    return 0;
}
   