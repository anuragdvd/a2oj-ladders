// Pashmak and Flowers :: http://codeforces.com/problemset/problem/459/B

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
    sll(n);
    map<ll,ll> mp;
    vector<ll> a; fr(i,0,n) { sll(x); mp[x]++; a.pb(x);  }
    sort(a.begin(),a.end());
    unsigned long long q=n*(n-1);   q=q/2;
      if(a[n-1]-a[0]==0)
      cout<<a[n-1]-a[0]<<" "<<q;
    else
       cout<<a[n-1]-a[0]<<" "<<mp[a[n-1]]*mp[a[0]];
}