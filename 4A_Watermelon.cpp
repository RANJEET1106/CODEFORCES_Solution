#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t&1 || t<=2)
        cout<<"NO";
    else
        cout<<"YES";
    cout<<endl;
}