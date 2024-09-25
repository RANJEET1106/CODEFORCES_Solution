#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count0=0,count1=0;
    string str;
    cin>>n>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='1') count1++;
        else count0++;
    }
    cout<<(n-(2*min(count1,count0)))<<endl;
}