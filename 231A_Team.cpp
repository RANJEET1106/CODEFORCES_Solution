#include <iostream>
using namespace std;
int main()
{
    int t,ans=0;
    cin>>t;
    while(t--)
    {
        int i=3,count=0,temp;
        while(i--)
        {
            cin>>temp;
            if(temp&1) 
                count++;
        }
        if(count >=2)
            ans++;
    }
    cout<<ans<<endl;
}