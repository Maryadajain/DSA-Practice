#include<iostream>
using namespace std;
int factorial(int n){
    if(n <= 1) {
        return 1;  // Base case: 0! = 1 and 1! = 1
    }
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;  // Calculate factorial iteratively
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);
    int result = fact_n / (fact_r * fact_n_r);      // Calculate nCr using the formula: nCr = n! / (r! * (n - r)!)
    return result;
}

int main(){
    int n=5, r=2;
    int result = nCr(n, r);
    cout << "nCr(" << n << ", " << r << ") = " << result << endl;
    return 0;
}
