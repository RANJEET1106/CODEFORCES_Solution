#include <iostream>
#include <set>
using namespace std;
int main()
{
    set <char> s({'H','Q','9'});
    string s1;
    cin>>s1;
    int n=s1.length();
    for(int i=0;i<n;i++)
    {
        if(s.count(s1[i])!=0)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}