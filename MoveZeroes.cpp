#include <iostream>
#include <vector>
using namespace std;

// Moves zeroes to the end of the array while maintaining the relative order of non-zero elements
void moveZeroes(vector<int>& nums){
    int j = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main(){
    vector<int> nums;
    int n, input;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> input;
        nums.push_back(input);
    }

    moveZeroes(nums); 

    cout << "Array after moving zeroes to the end: ";
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
