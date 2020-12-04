// Perfect Number :: https://codeforces.com/problemset/problem/919/B

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

ll sum(int n)
{
    ll val=0;
    while(n>0)
    {
        val+=n%10; n/=10;
    }
    return val;
}

int main()
{
    ll dp[10001];
    dp[1]=19;
    ll r=1;
    fr(i,2,10001){
        dp[i]=dp[i-1]+9;
        if(sum(dp[i])!=10) {
            while(sum(dp[i])!=10)   dp[i]+=9;
        }
        watch(dp[i]);
    }
    si(k);
    cout<<dp[k]; 
    
}