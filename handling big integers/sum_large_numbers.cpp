#include<bits/stdc++.h>
using namespace std;

//macros 
typedef long long int ll;
typedef vector<ll> vi;
#define pb push_back
#define logarr(array,length) for(int i=0;i<length;i++)cout<<array[i]<<" ";cout<<endl;

int main(){
    ll t;
    // test cases
    cin>>t; 
    while (t--){
        //*******************
    string a,b;
    cin>>a;
    cin>>b;
    vi s;
    vi d;
    for( int i=0;i<a.length();i++){
        s.push_back(a[i]-'0');
    }
    for( int i=0;i<b.length();i++){
        d.push_back(b[i]-'0');
    }
        //*******************

    //reversing the array
    reverse(s.begin(),s.end());
    reverse(d.begin(),d.end());

    int carry=0; //works as a carry for addition

    int m=min(s.size(),d.size());

    //finding max
    vi mxx;
    if(s.size()==m){
        mxx=d;
    }
    else{
        mxx=s;
    }


    vi st;//answer array

    //adding operation
    for(int i=0;i<m;i++){
        st.pb((s[i]+d[i]+carry)%10);
        carry=(s[i]+d[i]+carry)/10;
    }
    for(int i =m;i<max(s.size(),d.size());i++){
        st.pb((mxx[i]+carry)%10);
        carry=(mxx[i]+carry)/10;
    }

    //reversing the array
    reverse(st.begin(),st.end());


    //printing the answer array
    logarr(st,st.size());

    }


}