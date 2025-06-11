#include<bits/stdc++.h>
using namespace std;
int main() {
    int totalincome=0;
    int totalexpenses=0;
    cin>>totalincome;
    cin.ignore();

    unordered_map<string, int>mp;
    vector<string>v;
    
    while(true){
        string cat=" ";
        int exp;
        getline(cin,cat);
        if(cat=="done"){
            break;
        }
        cin>>exp;
        cin.ignore();

        if(mp.find(cat)==mp.end()){
            v.push_back(cat);
        }

        mp[cat]+=exp;
        totalexpenses+=exp;
}

cout<<"Total Income: "<<totalincome<<endl;
cout<<"Total Expenses: "<<totalexpenses<<endl;  
cout<<"Total Savings: "<<totalincome-totalexpenses<<endl;   
for(string s:v){
    cout<<s<<" : "<<mp[s]<<endl;
}
return 0;
}