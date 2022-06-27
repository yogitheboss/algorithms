#include<bits/stdc++.h>
using namespace std;
typedef string str;
int main(){
    str a="yogi is so cool";

    getline(cin,a); //taking string input using getline()
    cout<<"initial= "<<a;    

    a.push_back('s');//inserting a char at the last of string
    cout<<"\nafter push back = "<<a;

    a.pop_back();//deleting a char from the back of sting
    cout<<"\nafter pop back  = "<<a<<endl;


    //capacity functions gives the allocated memory for the string(it can be equal to or greater than the size of string)
    cout<<"capacity of string= "<<a.capacity();
    //resize function(to resize the string )
    a.resize(13);
    cout<<"\nafter resizing  = "<<a<<endl;
    a.shrink_to_fit();
    cout<<"capacity of string= "<<a.capacity();
    cout<<"\nThe length the string is= "<<a.length();
}

// begin()	This function returns an iterator to the beginning of the string.
// end()	This function returns an iterator to the end of the string.
// rbegin()	This function returns a reverse iterator pointing at the end of the string.
// rend()	This function returns a reverse iterator pointing at beginning of the string.
// copy(“char array”, len, pos) 	This function copies the substring in the target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied, and starting position in the string to start copying.
// swap()	This function swaps one string with other.