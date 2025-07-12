#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Characters don't match => Not a palindrome
        }
        left++;
        right--;
    }
    return true; // All characters matched => It's a palindrome
}

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    bool ans = isPalindrome(str);
    if( ans ==  true){
        cout<< "Palindrome";
    } else{
        cout<< "Not a Palindrome";
    }
    return 0;
}
    
    