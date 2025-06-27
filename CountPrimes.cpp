#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n){
   if(n <= 2) return 0;

    vector<bool> isPrime(n, true); // index 0 to n-1
    isPrime[0] = isPrime[1] = false;
    int count = 0;

    for(int i = 2; i < n; i++){
        if(isPrime[i]){
            count++;
            for(int j = i*2; j < n; j = j+i){
                isPrime[j] = false;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = countPrimes(n);
    cout << "Number of prime numbers less than " << n << " is: " << result << endl;

    return 0;
}
