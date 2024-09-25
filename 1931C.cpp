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
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void print(T t, V... v) {_print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
        // int n;
        // cin>>n;
        // vector<int> v(n);
        // for(int i=0;i<n;i++){
        //     cin>>v[i];
        // }
int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
      int n,first,last,ans,frontcount=0,backcount=0;
      bool frontflag=true,backflag=true;
      cin>>n;
      vector <int> v(n);
      for(int i=0;i<n;i++) {
        cin>>v[i];
        first=v[0];
        if(first==v[i] && frontflag) frontcount++;
        else frontflag=false;
      }
      last=v[n-1];
      if(frontcount==n) {
        cout<<0<<endl;
        continue;
      }
      frr(n){
        if(last==v[i] && backflag) backcount++;
        else break;
      }
      if(first==last) ans=n-frontcount-backcount;
      else ans=n-max(frontcount,backcount);
      cout<<ans<<endl;

    }
    return 0;
}
