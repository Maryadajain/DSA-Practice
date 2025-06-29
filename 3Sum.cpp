#include<iostream>
#include<bits/stdc++.h>
//#include<climits>
//#include<vector>
//#include<set>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){

//num = -1,0,1,2,-1,-4  we have to calculate a+b+c=0
//Brute
    int n = nums.size();
    vector<vector<int>> ans;
    set<vector<int>> s; //set<uniqueTriplets>

    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(nums[i] + nums[j] + nums[k] == 0){
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    sort(trip.begin(), trip.end());

                    if(s.find(trip)==s.end()){
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
        return ans;

    }
}
int main(){
    
}
