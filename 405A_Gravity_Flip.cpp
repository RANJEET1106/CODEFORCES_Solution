#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t,temp;
    vector <int> v;
    cin>>t;
    while(t--)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
}