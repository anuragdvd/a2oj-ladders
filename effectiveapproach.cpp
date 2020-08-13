// Effective Approach : https://codeforces.com/problemset/problem/227/B

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

int main()
{
    //freopen ("input.txt","r",stdin);
    si(n);
    map<ll,ll> mp;
    vector<ll> a; fr(i,0,n)  { sll(x); a.pb(x); mp[x]=i; }
    si(q);
    ll f=0,s=0;
    while(q--)
    {
        sll(x);
        f+=mp[x]+1;
        s+=n-mp[x];
        
    }
     cout<<f<<" "<<s;
}