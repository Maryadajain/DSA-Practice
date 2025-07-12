#include<iostream>
#include<vector>
using namespace std;


int partiton (vector<int> &arr, int st, int end){
    int idx = st-1, pivot = arr[end];

    for(int j = st; j < end; j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }

    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}

void quickSort(vector<int> &arr, int st, int end){
    if(st < end){
        int pivotIdx = partiton(arr, st, end);
        quickSort(arr, st, pivotIdx - 1); // Sort the left half
        quickSort(arr, pivotIdx + 1, end); // Sort the right half
    }

}

int main(){
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    quickSort(arr, 0, arr.size() - 1);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}