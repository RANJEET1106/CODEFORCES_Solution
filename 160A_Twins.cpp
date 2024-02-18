#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t,sum1=0,sum2=0;
    cin>>t;

    vector<int> v(t);
    for(int i=0;i<t;i++)
    {
        int temp;
        cin>>v[i];
        sum1+=v[i];
    }
    sort(v.begin(),v.end());
    int n=v.size();
    int i=0,count=0;
    for(int i=n-1;i>=0;i--)
    {
        sum1-=v[i];
        sum2+=v[i];
        count++;
        if(sum2>sum1) break;
    }
    cout<<count<<endl;

}