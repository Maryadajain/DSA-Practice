#include<iostream>
#include<vector>
using namespace std;
//TC=O(n log n), SC=O(n)
void merge(vector<int> &arr, int st, int mid, int end){
    vector<int> temp;
    int i = st, j = mid + 1;

    while(i <= mid && j <= end){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }
    for (int idx = 0; idx < temp.size(); idx++) {
        arr[st + idx] = temp[idx];
    }
}
void mergeSort(vector<int> &arr, int st, int end){
    if(st < end){
    int mid = (st + end) / 2;

    mergeSort(arr, st, mid); // Sort the left half
    mergeSort(arr, mid + 1, end); // Sort the right half

    merge(arr, st, mid, end); // Merge the sorted halves
    }
}
int main(){
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    mergeSort(arr, 0, arr.size() - 1);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl; // Output the sorted array
    return 0;
}