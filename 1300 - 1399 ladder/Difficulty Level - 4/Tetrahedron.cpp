// Tetrahedron :: https://codeforces.com/problemset/problem/166/E

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
    ll dp[2][4];
    int flag=0;
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        flag=!flag;
        for(int j=0;j<4;j++)
        {
            dp[flag][j]=0;
            for(int k=0;k<4;k++)
            {
                if(j!=k)    dp[flag][j]=(dp[flag][j]+dp[!flag][k]);
                if(dp[flag][j]>M)   dp[flag][j]-=M;
            }
        }
    }
    
   
    if(dp[flag][0]>M)   dp[flag][0]-=M;
    cout<<dp[flag][0];
}
