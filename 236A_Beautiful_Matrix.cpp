#include <iostream>
using namespace std;
int main()
{
    int ans,temp;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>temp;
            if(temp&1)
            {
                cout<<(abs(3-i)+abs(3-j))<<endl;
                return 0;
            }
        }
    }

}