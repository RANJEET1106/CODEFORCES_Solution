#include <iostream>
using namespace std;
int main()
{
    int temp;
    cin>>temp;
    if(temp>=0) cout<<temp;
    else
    {
        int num1,num2,temp1;
        num1=temp/10;
        temp1=temp%10;
        temp/=10;
        num2=(temp/10)*10+temp1;
        temp/=10;
        temp=max(num1,num2);
        cout<<temp;
    }
}