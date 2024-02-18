#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;

    for(auto& x:str1)
        x=tolower(x);

    for(auto& x:str2)
        x=tolower(x);
    
    if(str1<str2) cout<<-1;
    else if(str1>str2) cout<<1;
    else cout<<0;
    cout<<endl;
}