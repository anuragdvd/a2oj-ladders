// Puzzles :: https://codeforces.com/problemset/problem/337/A

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
    si(n);
    si(m);
    vector<ll> v(m);
    fr(i,0,m)   cin>>v[i];
    sort(v.begin(),v.end());
    ll ans=INT_MAX;
    fr(i,0,m-n+1)
    {
        ans=min(ans,v[n+i-1]-v[i]);
        
    }
    cout<<ans;
    
}