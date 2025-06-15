#include<iostream>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    int n = nums.size();
    int i=0, j = n-1;
    vector<int> ans;
    while( i < j){
        int pairSum = nums[i] + nums[j];
        if(pairSum < target){
            i++;
        } else if(pairSum > target){
            j--;
        } else {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans; 
        }  
    }
    return ans;
}

int main(){
    vector<int> nums = {2, 3, 4, 6};
    int target = 7;
    
    vector<int> ans = pairSum(nums, target);
    cout << ans[0]<<", "<< ans[1] <<endl;
    return 0;
}