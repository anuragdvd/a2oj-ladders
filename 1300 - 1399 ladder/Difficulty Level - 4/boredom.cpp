// 455 A Boredom : https://codeforces.com/contest/455/problem/A

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define frl(i,c,b) for(ll i=c;i<b;i++)
#define si(x) int x; scanf("%d", &x)
#define sll(x) ll x; scanf("%lld", &x)
#define pi(x) printf("%d", x)
#define pll(x) printf("%lld", x)
#define nl printf("\n")
#define watch(x) cout << (#x) << " is " << (x) << endl
#define MAX 100001
#define M 1000000007
#define pb push_back

typedef long long int ll;

using namespace std;

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
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


int main()
{
    //freopen ("input.txt","r",stdin); 
    si(n);
    vector<ll> a(n);
    ll mx=INT_MIN;
    fr(i,0,n)
    {    cin>>a[i]; mx=max(a[i],mx); }

    ll c[100000+1]={0};
    
    fr(i,0,n)
        c[a[i]]++;

    // first consider an array with 0 elements ans = 0
    // lets say only 1 element then ans = elem
    // for rest ans[i]=(freq[x]+ans[i-2],ans[i-1])
    // if we are selecting the current number then next number we will pick will be a[i-2]
    // if we dont select the current number then the answer till ith element will be dp[i-1]

    vector<ll> dp(100000+1,0);

    dp[0]=0;
    dp[1]=c[1];
    fr(i,2,100000+1)
    {
        
        dp[i]=max(dp[i-1],dp[i-2]+c[i]*i);
    }
    
 
    

    cout<<dp[100000];

}