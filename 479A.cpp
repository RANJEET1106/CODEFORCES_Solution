#include <iostream>
using namespace std;
int main()
{
    int a,b,c,max1=0;
    cin>>a>>b>>c;
    max1=max(max1,a+b+c);
    max1=max(max1,a*b*c);
    max1=max(max1,(a+b)*c);
    max1=max(max1,a*(b+c));
    cout<<max1<<endl;
}