// Cookies :: https://codeforces.com/problemset/problem/129/A

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
    si(n); ll a[n]; fr(i,0,n)   cin>>a[i];
    ll e=0,o=0;
    fr(i,0,n) {  if(a[i]%2==0)   e++; else o++; }
    ll ans=0;
    if(o%2==0)
    {
        cout<<e;
    }
    else
    {
        cout<<o;    
    
    }
    
    
}
