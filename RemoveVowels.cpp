#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
using namespace std;

string removeVowels(string str){
    for(int i=0; i<str.length(); i++){
        if(str[i] =='a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u' ||
           str[i] =='A' || str[i] =='E' || str[i] =='I' || str[i] =='O' || str[i] =='U'){
            str = str.substr(0,i) + str.substr(i+1);
            i--;// Adjust index after removal
        }
    }
    return str;
}
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    string result = removeVowels(str);
    cout << "String after removing vowels: " << result << endl;
    
    return 0;
}