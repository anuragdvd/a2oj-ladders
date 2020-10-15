// Fence :: https://codeforces.com/contest/363/problem/B

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
    si(k);
    ll dp[n+1]={0};
    ll a[n+1]; 
    fr(i,1,n+1)  cin>>a[i];
    fr(i,1,n+1)  dp[i]=a[i]+dp[i-1];
    ll mn=INT_MAX;
    ll ans=1;
    fr(i,1,n-k+2)
    {
        if(dp[i+k-1]-dp[i-1]<mn)
        {
            mn=dp[i+k-1]-dp[i-1];
            ans=i;
//            watch(ans); watch(mn);
        }
    }
    cout<<ans;
    
}