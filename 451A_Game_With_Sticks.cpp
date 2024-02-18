#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ans=m*n;
    ans/=max(m,n);
    if(ans%2==1) cout<<"Akshat";
    else cout<<"Malvika";
    cout<<endl;

}