// Little Elephant and Rozdil : https://codeforces.com/problemset/problem/318/A

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
    vector<ll> a; map<ll,ll> mp;
    fr(i,0,n) { sll(x); a.pb(x); mp[x]++; }
    ll mn=INT_MAX; ll pos;
    fr(i,0,n) { if(mn>a[i]) { mn=a[i]; pos=i+1; } }
    if(mp[mn]==1)   cout<<pos;
    else cout<<"Still Rozdil";
}