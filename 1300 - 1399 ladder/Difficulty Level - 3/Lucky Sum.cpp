// 121A Lucky Sum :: https://codeforces.com/problemset/problem/121/A

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
    sll(l); sll(r);
    
    ll ans=0;
    
    vector<ll> v;
    // lucky numbers - 4 7 44 47 74 77 444 ....
    v.pb(0);
    v.pb(4);
    v.pb(7);
    int i=3;
    while(1)
    {
        ll val=v[i-2]*10+4;
        v.pb(val);
        val=v[i-2]*10+7;
        v.pb(val);
        i+=1;
        if(val>=1000000000)
            break;
    }
    
    
    fr(i,1,v.size())
    {
        ll lb=max(l,v[i-1]+1);
        ll rb=min(r,v[i]);
        if(lb<=rb)
        {
            ans+=v[i]*(rb-lb+1);
        }
        
    }
    cout<<ans;
    
    
}