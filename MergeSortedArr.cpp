#include<iostream>
#include<vector>
using namespace std;
void mergeSortedArr(vector<int>& A, int m, vector<int>& B, int n) { //O(m+n) time complexity O(1) space complexity
    int idx = m+n-1; // Index for the merged array
    int i = m-1; // Last index of A
    int j = n-1; // Last index of B

    while(i>=0 && j>=0){
        if(A[i] >= B[j]) {
            A[idx]= A[i];
            i--;
            idx--;
        } else {
            A[idx] = B[j];
            j--;
            idx--;
        }
    }
    // If there are remaining elements in B, copy them
    while(j>=0) {
        A[idx] = B[j];
        j--;
        idx--;
    }
}    

int main() {
    vector<int> A = {1, 3, 5, 7, 0, 0, 0};
    vector<int> B = {2, 4, 6};
    int m = 4; // Number of elements in A before merging
    int n = 3; // Number of elements in B   
    mergeSortedArr(A, m, B, n);
    cout << "Merged array: ";
    for(int i = 0; i < m + n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}