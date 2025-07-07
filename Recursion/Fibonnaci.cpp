#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n; // Base case
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; 
    cout << "Fibonacci of " << n << " is " << fibonacci(n) << endl; // Call the recursive function
    return 0;
}