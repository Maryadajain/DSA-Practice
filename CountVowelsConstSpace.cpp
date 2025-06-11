#include<iostream>
#include<string>
using namespace std;

int solve(string str, int length){
    int vowels=0, consonants=0, spaces=0;
    for(int i=0; i<length; i++){
        str[i]=tolower(str[i]); // Convert to lowercase for uniformity
    }
    for(int i=0; i<length; i++){
        if(str[i]=='a' || str[i] == 'e' || str[i]=='i' || str[i] == 'o' || str[i] == 'u')
        vowels++;
        else if(str[i]>='a'&& str[i]<='z')
        consonants++;
        else if(str[i]==' ')
        spaces++;
    }
    cout<<"Vowels: " << vowels << endl;
    cout<<"Consonants: " << consonants << endl;     
    cout<<"Spaces: " << spaces << endl;
    
}


int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int length = str.length();
    solve(str, length);
    return 0;

}
