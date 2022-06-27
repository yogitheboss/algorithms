#include <iostream>
using namespace std;
int main()
{
    int n; // Number of terms
    cout << "Enter number of terms in the array= ";
    cin >> n;
    int num_times;
    cout << "Enter number of rotations you want to perform";
    cin >> num_times;
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     for (int i = 0; i < n; i++)
    {
        cout<< a[i]<<"  ";
    }


    for( int i=0;i<num_times;i++){
        for(int j=0;j<n-1;j++){
            int cd=a[j];
            a[j]=a[j+1];
            a[j+1]=cd;
        }
    }
    cout<<"***************";
    for (int i = 0; i < n; i++)
    {
        cout<< a[i]<<"  ";
    }
}


