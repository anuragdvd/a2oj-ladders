// 437C - The Child and Toy :: https://codeforces.com/problemset/problem/437/C


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

vector<ll> g[1001];


bool comp(pair<ll,int> p1, pair<ll,int> p2)
{
    return p1.first>p2.first;
}

int main()
{
    si(n);  si(m);
    vector<pair<ll,int>> v;
    ll a[n+1];    fr(i,1,n+1)   cin>>a[i], v.pb({a[i],i});
    sort(v.begin(),v.end(),comp);
    while(m--)
    {
        si(x); si(y);
        g[x].pb(y);
        g[y].pb(x);
        
    }
    
    ll cost=0;

    for(int i=0;i<n;i++)
    {
        v[i].first=0;
        a[v[i].second]=0;
        for(auto j:g[v[i].second])
        {
            cost+=a[j];
        }
    }
    
    cout<<cost;
}