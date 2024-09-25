#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1="hello";
    cin>>str;
    int n=str.length(),i=0;
    while(i<5)
    {
        for(int j=0;j<n;j++)
        {
            if(str[j]==str1[i]) i++;
            // cout<<i <<" ";
        }
        // cout<<endl;
        break;
    }
    if(i==5) cout<<"YES";
    else cout<<"NO";

}