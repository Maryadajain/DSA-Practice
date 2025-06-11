#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin, str);


    string result;
    for(int i=0; i<str.length(); i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            result +=str[i];
        }
    }
    cout<<"String after removing special characters: "<<result<<endl;   
    return 0;

}*/


#include<bits/stdc++.h>
using namespace std;
string removespecialchar(string str, int n){
    string result;
    for(int i=0; i<n; i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9') || (str[i] >= '0' && str[i] <= '9')){
            result += str[i];
        }
    }
    return result;
}


int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin, str);
    int n = str.length();
    cout<<"String after removing special characters: "<< removespecialchar(str, n) <<endl;   
    return 0;
}


