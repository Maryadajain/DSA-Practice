#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Convert character to ASCII value
    int asciiValue = static_cast<int>(ch); 
    // Using static_cast for type conversion 
    // static_cast<int>(ch) converts the character to its corresponding ASCII integer value.

    // Output the ASCII value
    cout << "The ASCII value of '" << ch << "' is: " << asciiValue << endl;

    return 0;
}



