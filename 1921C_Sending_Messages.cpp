#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int num,charge,c1,c2,prev,curr;
        cin>>num>>charge>>c1>>c2;
        cin>>prev;
        charge-=min((prev)*c1,c2);
        num--;
        while (num--)
        {
            cin>>curr;
            charge-=min((curr-prev)*c1,c2);
            prev=curr;
        }
        if(charge>0) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}