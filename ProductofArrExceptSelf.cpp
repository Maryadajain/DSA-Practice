#include<iostream>
#include<vector>
using namespace std;

vector<int> productexceptSelf(vector<int> &nums){
    int n= nums.size();
    vector<int> ans(n, 1);
    //Prefix
    for(int i = 1; i<n; i++){
        ans[i]=ans[i-1] * nums[i-1];
    }

    //Suffix
    int suffix = 1;
    for(int i = n-1; i>=0; i--){
        ans[i] = ans[i] * suffix;
        suffix *= nums[i];
    }
    return ans;
}

int main(){
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = productexceptSelf(nums);
    
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}