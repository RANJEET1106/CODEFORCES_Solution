#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        int t;
        cin>>str;
        t=str.length();
        if(t<=10)
            cout<<str;
        else
        {
            string ans="";
            ans+=str[0];
            ans+=to_string(t-2);
            ans+=str[t-1];
            cout<<ans;
        }
        cout<<endl;
    }
}