#include<iostream>
#include<vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int count = 0;
        vector<int> prefixSum(n, 0);

        prefixSum[0] = arr[0];
        for(int i=1; i<n; i++){
            prefixSum[i] = prefixSum[i-1] + arr[i];
        }

        unordered_map<int, int> m;
        for(int j=0; j<n; j++){
            if(prefixSum[j] == k) count++;

            int val = prefixSum[j] - k;
            if(m.find(val) != m.end()){
                count += m[val];
            }

            if(m.find(prefixSum[j]) == m.end()){
                m[prefixSum[j]] = 0;
            }
            m[prefixSum[j]]++;
        }
        return count;
    }
};

int main(){
    vector<int> nums = {2, 3, 4, 1};  // Sample array
    int k = 5;                     // Target sum

    Solution sol;
    int result = sol.subarraySum(nums, k);

    cout << "Number of subarrays with sum " << k << " is: " << result << endl;

    return 0;

}