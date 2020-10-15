// k-Tree :: https://codeforces.com/problemset/problem/431/C

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
    si(d);
    ll dp[n+1][2];
    
    memset(dp,0,sizeof(dp));
    
    // we have to make n = 0 
    dp[0][0]=1;
    dp[0][1]=0;
    
    fr(i,1,n+1)
    {
        fr(j,1,k+1)
        {
            if(i-j<0)   break;
            if(j-d>=0)
            {
                dp[i][1]=(dp[i-j][1]%M+dp[i-j][0]%M+dp[i][1]%M)%M;
            }
            else{
                dp[i][0]=(dp[i-j][0]%M+dp[i][0]%M)%M;
                dp[i][1]=(dp[i-j][1]%M+dp[i][1]%M)%M;
            }
        }
        //cout<<dp[i][0]<<" "<<dp[i][1]<<endl;
    }
    
    cout<<dp[n][1];
    
    
}