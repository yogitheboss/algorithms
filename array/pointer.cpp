#include<iostream>
using namespace std;
int main(){
    int a=1;
    int *point;
    int b=2;
    int c=2;
    int **point_point;
    point=&a;
    point_point=&point;
    *point+=1;
    **point_point+=1;
    cout<<point<<endl;
    cout<<point_point<<endl;//their addresses won't be contiguous as b and c have addresss between them.
    cout<<*point<<endl;
    cout<<a;
}