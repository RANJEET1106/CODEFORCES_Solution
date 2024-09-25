#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,ans="";
    cin>>str;
    int n=str.length();
    set<char> s={'a','e','i','o','u','y'};
    for(int i=0;i<n;i++)
    {
        char c=(char)tolower(str[i]);
        if(s.count(c)==0) 
        {
            ans+=".";
            ans+=c;
        }
    }
    cout<<ans<<endl;
}