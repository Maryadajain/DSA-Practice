#include<iostream>
#include<math.h>
using namespace std;
double Pow(double x, int n){
    if (n == 0) return 1;
    if (x == 0) return 0;
    if (x == 1) return 1;

    long binform = n;
    if (n < 0){
        x = 1/ x;
        binform = -binform;
    }

    double ans = 1;
    while(binform > 0){
        if(binform%2==1){
            ans *= x;
        }
        x *= x;
        binform /= 2;
    }
    return ans;
}
int main() {
    double x = 2.0;
    int n = 3;
    cout << "Result of " << x << "^" << n << " is: " << Pow(x, n) << endl; 
    return 0;
}