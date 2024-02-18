#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,temp;
    cin>>n>>m;
    vector <int> v;
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int min1=2000;
    for(int i=0;i<=(m-n);i++)
    {
        int diff=v[i+n-1]-v[i];
        min1=min(min1,diff);
    }
    cout<<min1;
}