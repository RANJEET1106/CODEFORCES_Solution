#include <iostream>
using namespace std;
int main()
{
    int n,prev,curr,max1=0,count=1;
    cin>>n;
    cin>>prev;
    n--;
    while(n--)
    {
        cin>>curr;
        if(curr<prev) 
        {
            max1=max(count,max1);
            count=1;
        }
        else 
            count++;
        prev=curr;
    }
    max1=max(max1,count);
    cout<<max1;
}