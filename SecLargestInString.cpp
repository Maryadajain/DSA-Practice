#include<iostream>
#include<string>
using namespace std;

int SecondLargestInString(string s){
    int first = -1, second = -1;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (isdigit(s[i])) { // Check if the character is a digit
            int digit = s[i] - '0'; // Convert char to int

            if (digit > first) {
                second = first;
                first = digit;
            } else if (digit > second && digit < first) {
                second = digit;
            }
        }
    }
    return second;
}

int main() {
    string s = "abc123xyz46";
    int secondLargest = SecondLargestInString(s);   // Call the function to find the second largest digit 
    if (secondLargest != -1) {
        cout << "The second largest digit in the string is: " << secondLargest << endl;
    } else {
        cout << "There is no second largest digit in the string." << endl;
    }
    return 0;
}