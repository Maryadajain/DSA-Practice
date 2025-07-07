#include<iostream>
using namespace std;
void printNumbers(int n) {
    if (n == 1){
        cout << "1\n"; // Print the base case
        return; // Base case
    } 
    cout << n << " "; // Print the current number before the recursive cal
    printNumbers(n - 1); // Recursive call
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input the number
    printNumbers(n); // Call the recursive function
    return 0; // Return success
}