#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        uint64_t x,y,temp,count=0;
        cin>>x>>y;
        for(int i=9;i>=0;i--){
            temp=x*pow(10,i);
            count+=y/temp;
            y=y%temp;
        }
        count+=y;
        cout<<count<<endl;
    }

}