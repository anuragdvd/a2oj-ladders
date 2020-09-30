// Free Cash :: https://codeforces.com/problemset/problem/237/A


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
#define inf 1000000001

typedef long long int ll;

using namespace std;

int main()
{
    ll ans=1;
    si(n);
    map<pair<ll,ll>,ll> mp;
    while(n--)
    {
        si(x); si(y);
        
        if(mp[{x,y}]!=0)
        {
            mp[{x,y}]++;
            ans=max(mp[{x,y}],ans);
        }
        else    mp[{x,y}]++;
    }
    cout<<ans;
}