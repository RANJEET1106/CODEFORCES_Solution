#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    int t=s.length();
    char side;
    string str,ans="";
    cin>>side>>str;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        int j=s.find(str[i]);
        if(side=='R') ans+=s[j-1];
        else ans+=s[j+1];
    }
    cout<<ans<<endl;
}