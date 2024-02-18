#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i=2;
        while(i>0)
        {
            int temp;
            temp=pow(2,i)-1;
            if(n%temp==0)
            {
                cout<<n/temp<<endl;
                break;
            }
            i++;

        }
    }
}