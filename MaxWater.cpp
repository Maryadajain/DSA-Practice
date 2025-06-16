#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int maxWater(vector<int>& height){
    int maxwater = 0;
    int left=0, right=height.size()-1;
    while(left<right){
        int width = right- left;
        int ht = min(height[left], height[right]);
        maxwater = max(maxwater, width * ht);

        if(height[left] < height[right]){
            left++;
        } else {
            right--;
        }
    }
    return maxwater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << "Maximum water that can be trapped: " << maxWater(height) << endl; // Output: 49
    return 0;
}
