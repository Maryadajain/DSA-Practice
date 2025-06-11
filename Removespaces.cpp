#include<iostream>
using namespace std;

string removeSpaces(char str[]){
    int cnt=0;
    for(int i=0;i<str[i];i++)
      if (str[i]!=' '){
      str[cnt]=str[i];
      cnt++;
    }
    str[cnt]='\0';
    return str;
}

int main(){
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "String after removing spaces: " << removeSpaces(str) << endl;
}