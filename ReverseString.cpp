#include<bits/stdc++.h>
using namespace std;

// 3methods 
//1 Using stack LIFO 2 Using two pointers 3 Using STL reverse function

//2
void swap(string &s, int i, int j) {
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}
void reverseString(string &s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        swap(s, i, j);
        i++;
        j--;
    }
}

int main(){
    string str;
    cout<< "Enter a string: ";
    getline(cin, str);

    cout<< "Original string: " << str << endl;
    reverseString(str);
    cout<< "Reversed string: " << str << endl;

    return 0;

}

//3
/*
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;

    return 0;
}

void reverseString(vector<char> &s) {
    int left = 0, right = s.size() - 1;
    chat temp=0;
    while (left < right) {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}
*/