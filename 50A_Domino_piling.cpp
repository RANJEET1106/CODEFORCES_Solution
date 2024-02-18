#include <iostream>
using namespace std;
int main()
{
    int temp1,temp2,m,n,ans;
    cin>>temp1>>temp2;
    m=min(temp1,temp2);
    n=max(temp1,temp2);

    ans=m*(n/2)+(n%2)*(m/2);
    cout<<ans;
}