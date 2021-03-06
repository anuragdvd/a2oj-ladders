// Big Segment :: https://codeforces.com/problemset/problem/242/B

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define fri(i,c,b,x) for(int i=c;i<b;i+=x)
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

int main()
{
    si(n);
    vector<pair<ll,ll>> v;
    ll l=INT_MAX; ll r=0;
    fr(i,0,n)
    {
        sll(x); sll(y); v.pb({x,y});
        l=min(x,l);
        r=max(y,r);
    }
    ll ans=-1;
    int k=0;
    for(auto i:v)
    {
        k++;
        if(i.first<=l&&i.second>=r) ans=k;
    }
    cout<<ans;
    
}