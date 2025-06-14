#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int i=0; i<nums.size(); i++ ) {
        result ^= nums[i]; // XOR operation
    }
    return result;
}

int main(){
    vector<int> nums = {4, 1, 7, 1, 7, 3,3};
    cout << "Single number: " << singleNumber(nums) << endl; // Output: 4
    return 0;
}