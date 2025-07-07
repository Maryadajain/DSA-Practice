#include<iostream>
using namespace std;

int sum(int n){
    if(n==1){
        return 1; // Base case
    }

    return n + sum(n-1); // Recursive call
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n; // 
    cout << "Sum of first " << n << " natural numbers is " << sum(n) << endl; // Call the recursive function
    return 0; //
}