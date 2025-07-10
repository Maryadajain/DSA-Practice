#include<iostream>
#include<vector>
#include<string>

using namespace std;

string longestCommonPrefix(vector<string> &arr, int n){
    string ans = "";
    for(int i = 0; i<arr[0].length(); i++){
        char ch = arr[0][i];

        bool match = true;

        for(int j = 1; j<n; j++){
            if(arr[j].size() <= i || arr[j][i] != ch){
                match = false;
                break;
            }
        }
        if(match == false){
            break;
        } else {
            ans.push_back(ch);
        }
    }
    return ans;     
}
int main(){
    vector<string> arr = {"flower", "flow", "flight"};
    int n = arr.size();
    string result = longestCommonPrefix(arr, n);
    cout << "Longest Common Prefix: " << result << endl; // Output: "fl"
    return 0;
}
