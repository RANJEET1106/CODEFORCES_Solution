#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        uint64_t n,cnt=0;
        cin>>n;
        while(n!=1)
        {
            if(n%6==0)
            {
                n/=6;
                cnt++;
            }
            else if(n%3==0)
            {
                n*=2;
                cnt++;
            }
            else
            {
                break;
            }
        }
        if(n==1) cout<<cnt;
        else cout<<-1;
        cout<<endl;
    }
}