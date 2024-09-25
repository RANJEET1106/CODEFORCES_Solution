#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,temp,num;
    bool flag=false;
    cin>>n;
    vector <int>v = {0,4,7};
    for(int i=1;i<3;i++){
        for(int j:v){
            for(int k:v){
                num=100*k+10*j+v[i];
                if(n%num==0) flag=true;
            }
            if(flag) break;
        }
        if(flag) break;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
}