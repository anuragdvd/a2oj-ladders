//  Cut Ribbon :: https://codeforces.com/problemset/problem/189/A


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
    si(n);
    si(a);
    si(b);
    si(c);
    
    vector<ll> dp(n+1,-100000000);
    dp[0]=0;
    fr(i,1,n+1)
    {
        if(i<a&&i<b&&i<c)
            dp[i]=-100000000;
        else 
        {if(i-a>=0)
            dp[i]=max(dp[i],dp[max(0,i-a)]+1);
        if(i-b>=0)
            dp[i]=max(dp[i],dp[max(0,i-b)]+1);
        if(i-c>=0)
            dp[i]=max(dp[i],dp[max(0,i-c)]+1);
        }
    }

    //fr(i,0,n+1) watch(dp[i]);
    cout<<dp[n];
}