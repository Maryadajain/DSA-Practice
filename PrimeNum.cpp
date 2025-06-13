#include<iostream>
using namespace std;
bool primeNum(int n){
    for(int i = 2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;  // If no divisors found, n is prime
}
int main(){
    int n;
    cout<< "Enter a number: ";
    cin >> n;
    if(primeNum(n)){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
}