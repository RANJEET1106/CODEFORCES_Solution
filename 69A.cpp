#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    bool flag=true;
    cin>>t;
    vector<vector<int>> arr(t,vector<int>(3,0));
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<3;j++)    cin>>arr[i][j];
    }
    for(int j=0;j<3;j++)
    {
        int sum=0;
        for(int i=0;i<t;i++)    sum+=arr[i][j];
        if(sum!=0) 
        {
            flag=false;
            break;
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";

}