#include<iostream>
#include<vector>
using namespace std;

class Solution { //Brute O(N^2) 
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            for(int j=i; j<nums.size(); j++){
                sum += nums[j];
                if(sum == k){
                    count++;
                }
            }
        }
        return count;
        
    }
};

int main(){
    vector<int> nums = {1, 2, 3};  // Sample array
    int k = 3;                     // Target sum

    Solution sol;
    int result = sol.subarraySum(nums, k);

    cout << "Number of subarrays with sum " << k << " is: " << result << endl;

    return 0;

}