#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        uint64_t temp;
        cin>>temp;
        if(ceil(log2(temp))!=floor(log2(temp))) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}