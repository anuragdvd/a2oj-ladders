// Vanya and Lanterns :: https://codeforces.com/problemset/problem/492/B

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
    si(n); sll(l);
    ll a[n]; fr(i,0,n)   cin>>a[i]; sort(a,a+n);
    long double ans=0;
    fr(i,0,n-1)
    {
        long double temp=(long double)(a[i+1]-a[i])/(long double)2;
        ans=max(ans,temp);
    }
    
    ans=max(ans,(long double)a[0]);
    ans=max(ans,(long double)l-a[n-1]);
    cout<<fixed<<showpoint;
    cout<<setprecision(10)<<ans;
    
}