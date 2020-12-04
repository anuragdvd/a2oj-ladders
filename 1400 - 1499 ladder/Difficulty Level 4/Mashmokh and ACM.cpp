// Mashmokh and ACM :: https://codeforces.com/problemset/problem/414/B

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define fri(i,c,b,x) for(int i=c;i<b;i+=x)
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
#define BLK 548 
 
typedef long long int ll;
 
using namespace std;

ll dp[2005][2005];

ll ans(int n,int k,int i)
{
    if(k<=0)
    {
        return 1;
    }
    if(dp[i][k]!=-1){
        return dp[i][k];
    }
    ll val=0;
    for(int j=i;j<=n;j+=i)
    {
        val=(val+ans(n,k-1,j))%M;
    }
    return dp[i][k]=val;
}
 
int main()
{
    si(n); si(k);
    memset(dp,-1,sizeof(dp));
    cout<<ans(n,k,1);
}
