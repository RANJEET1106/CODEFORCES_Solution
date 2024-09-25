#include <bits/stdc++.h>
using namespace std;

void convert(string& str)
{
    int n = str.length();
    for (int i = 0; i < n; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
}

int main(){
    string str;
    bool flag=true;
    int n;

    cin>>str;
    n=str.length();

    for(int i=1;i<n;i++){
        if(islower(str[i])) flag=false;
    }
    if(flag)    convert(str);
    cout<<str<<endl;
}