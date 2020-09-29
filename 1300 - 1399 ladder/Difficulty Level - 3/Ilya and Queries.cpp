// Ilya and Queries :: https://codeforces.com/problemset/problem/313/B

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
    string s; cin>>s;
    
    si(m);
    int n=s.length();
    ll dp[n+1]={0};
    dp[1]=0;
    fr(i,2,n+1)
    {
        if(s[i-2]==s[i-1])
        {
            dp[i]=dp[i-1]+1;
        }
        else
            dp[i]=dp[i-1];
       // cout<<dp[i]<<" ";
    }
    while(m--)
    {
        si(l); si(r);
        cout<<dp[r]-dp[l]<<endl;
    }    
    
}