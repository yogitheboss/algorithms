#include<bits/stdc++.h>
using namespace std;

int main(){
//! 'digit' to int conversion
    // char a='9';
    // int b=a-'0';
    // cout<<b;
//? Program start:

    string s;
    cin>>s;
    vector<int> a;

    for (int i=0;i<s.length();i++){
        a.push_back(s[i]-'0');
    }
 
    for(auto it=a.begin();it!=a.end();it++ ){
        cout<<*it<<"  ";
    }
}