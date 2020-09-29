// The Fibonacci Segment :: https://codeforces.com/problemset/problem/365/B

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
    ll a[n];
    fr(i,0,n)
        cin>>a[i];
    ll start=min(2,n),end=0;
    ll ans=0;
    if(n<=2)    ans=n;
    ll len=2;
    while(start<n)
    {
        if(a[start]==a[start-1]+a[start-2])
        {
            len++;
            
        }
        else
        {
            len=2;
        }
        ans=max(ans,len);
        start++;
    }
    cout<<ans;
}