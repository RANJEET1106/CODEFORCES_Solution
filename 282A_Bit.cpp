#include <iostream>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    while(t--)
    {
        string temp;
        cin>>temp;
        if(temp[1]=='+') count++;
        else count--;
    }
    cout<<count<<endl;
}
