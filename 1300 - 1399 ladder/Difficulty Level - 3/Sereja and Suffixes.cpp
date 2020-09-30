// Sereja and Suffixes :: https://codeforces.com/problemset/problem/368/B

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
    si(n); si(q);
    ll a[n];
    fr(i,0,n)   cin>>a[i];
    ll dp[n]={0};
    dp[n-1]=1;
    map<ll,ll> mp;
    mp[a[n-1]]=1;
    for(int i=n-2;i>=0;i--)
    {
        if(mp.find(a[i])==mp.end())
            dp[i]=dp[i+1]+1;
        else
            dp[i]=dp[i+1];
        mp[a[i]]=1;
    }
    
    while(q--)
    {
        si(l);
        cout<<dp[l-1]<<endl;
    }
    
}