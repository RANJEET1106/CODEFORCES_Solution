#include <iostream>
using namespace std;
int main()
{
    int n,k,min1=1,count=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int temp;
        cin>>temp;
        //cout<<i<<endl;
        if(i==k) min1=temp;
        if(temp>=min1 && temp>0) count++;
        if(temp<min1) break;
    }
    cout<<count<<endl;
}