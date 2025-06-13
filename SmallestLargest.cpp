#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums[5] = {1,4,6,8,-8};
    int smallest = INT_MAX;
    //int largest = INT_MIN;
    for(int i=0; i<5; i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        }
    }
    cout<<"Smallest number is: " << smallest << endl;
    return 0;
}

/*using min and max functions

int main(){
    smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0; i<5; i++){
        int smallest =min(nums, smallest);
        int largest =max(nums, largest);
    }
    cout<<"Smallest number is: " << smallest << endl;
    cout<<"Largest number is: " << largest << endl;
    return 0;
}
*/
