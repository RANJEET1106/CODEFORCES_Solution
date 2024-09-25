#include <iostream>
using namespace std;
int main()
{
    uint64_t n,m,a;
    cin>>n>>m>>a;
    uint64_t c=n/a,d=m/a;
    if(n%a!=0) c++;
    if(m%a!=0) d++;
    cout<<c*d<<endl;
}