#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,temp;
    vector <int> v;
    cin>>n>>m;
    while(n--)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<m;i++)
    {
        if(v[i]<0) sum-=v[i];
        else break;
    }
    cout<<sum<<endl;
}