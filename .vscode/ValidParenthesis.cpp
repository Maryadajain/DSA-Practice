#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for(char ch : s) {
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if(st.empty()) return false;
            char top = st.top();
            if((ch == ')' && top != '(') ||
               (ch == '}' && top != '{') ||
               (ch == ']' && top != '[')) {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string input;
    cout << "Enter a string with parentheses: ";
    cin >> input;

    if(isValid(input)) {
        cout << "The string is valid.\n";
    } else {
        cout << "The string is invalid.\n";
    }

    return 0;
}
