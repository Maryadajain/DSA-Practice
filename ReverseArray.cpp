#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverseArr(int arr[], int size){
    int start=0, end=size-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;  
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=7;

    cout<< reverseArr(arr, size) <<endl;
    for(int i=0; i<size; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}