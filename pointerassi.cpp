#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Enter 1st no. : ";
    cin>>x;
    cout<<"Enter 2nd no. : ";
    cin>>y;
    int *ptrx , *ptry;
    ptrx = &x;
    ptry = &y;
    int ans = (*ptrx) * (*ptry);
    cout<<ans;
    return 0;
}