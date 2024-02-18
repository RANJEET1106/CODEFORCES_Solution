#include <iostream>
using namespace std;
int main()
{
    uint64_t n,k;
    cin>>n>>k;
    uint64_t mid=n/2+n%2;
    if(k>mid)
    {
        uint64_t ans=2+(k-mid-1)*2;
        cout<<ans;
        return 0;
    }
    else
    {
        uint64_t ans=1+(k-1)*2;
        cout<<ans;
        return 0;
    }
}