#include <iostream>
#include <vector>
#include <cmath>  // for abs()

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n); // Output array of same size

        int left = 0;          // Pointer to the start of array
        int right = n - 1;     // Pointer to the end of array
        int pos = n - 1;       // Position to insert the next largest square

        // Traverse from both ends towards center
        while (left <= right) {
            // Compare absolute values at both ends
            if (abs(nums[left]) > abs(nums[right])) {
                result[pos] = nums[left] * nums[left];
                left++;
            } else {
                result[pos] = nums[right] * nums[right];
                right--;
            }
            pos--; // Move the position backward
        }

        return result;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {-7, -3, 0, 2, 5};

    vector<int> result = sol.sortedSquares(nums);

    cout << "Sorted squares: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
