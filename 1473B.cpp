#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
const ll mod=1e9+7;
#define F first
#define S second
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define pb push_back
#define nl '\n'
#define nll cout<<'\n'
#define fr(n) for(int i=0; i<n; i++)
#define frr(n) for(int i=n-1;i>=0;i--)
 
 
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(ll n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
 
 
// Mathematical functions
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}

string check(string s, int k)
{
     string r="";
     while(k--)
     {
          r+=s;
     }
     
     return r;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        ll g= __gcd(s.length(),t.length());
        if(check(s,t.length()/g)== check(t,s.length()/g))
        cout<<check(s,t.length()/g)<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}