#include<iostream>
using namespace std;
 int main()
 {
    int a[]={1,2,5,67,3};
    int n=sizeof(a)/sizeof(int);
    int b[n*2];
    cout<<"size of array is "<<sizeof(a);       //this returns 20 as integer size is 4 byte 
    cout<<"\nThe number of elements in the array is= "<<sizeof(a)/sizeof(int)<<"\n";  //prints number of elements
    for( int i=0 ; i<n*2;i++)
    {
        if(i>=n)
        b[i]=a[i-n];
        else{
            b[i]=a[i];
        }
        cout<<b[i]<<endl;
    }
    int index=0;
    cout<<"Enter the number from which you want to see circular array from ";
    cin>>index;
    for(int i=index;i<n+index;i++){
        cout<<b[i]<<"  ";
    }
    cout<<"\n";

    //this approach user extra memory of order O(n) 
    //there is a better approach to this:
    //in this method we will use mod that will gives us the required index easily
    for(int i=index;i<n+index;i++)
    {
        cout<<a[i%n]<<"  ";
    }
    

 }