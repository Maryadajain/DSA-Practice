#include<iostream>
using namespace std;

int sum(int arr[], int size){
    int count=0;
    for(int i=0; i<size; i++){
            count += arr[i];
        }
    return count;
}

int product(int arr[], int size){
    int count=1;
    for(int i=0; i<size; i++){
            count *= arr[i];
        }
    return count;
}

int main(){
    int arr[]={3,3};
    int size=2;
    cout<<"Sum "<< sum(arr, size) << endl;
    cout<<"Product "<< product(arr, size) << endl;
    return 0;
}