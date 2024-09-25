#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,sum=0,count=0;
    vector <int> v(12);
    cin>>k;
    for(int i=0;i<12;i++) cin>>v[i];
    sort(v.begin(),v.end(),greater <int>());
    for(int i:v)
    {
        if(sum<k)
        {
            sum+=i;
            count++;
        }
        else break;
    }
    if(count==12 and sum<k) cout<<-1<<endl;
    else cout<<count<<endl;

}