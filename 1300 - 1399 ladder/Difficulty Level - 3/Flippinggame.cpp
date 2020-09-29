// Flippint Game :: https://codeforces.com/problemset/problem/327/A

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
    int n; 
    cin>>n;
    ll a[n];
    bool flag=true;
    fr(i,0,n)  { cin>>a[i]; if(a[i]==0)  flag=false; }
    int ans=INT_MIN;
    ll dp[n+1];
    dp[0]=a[0];
    fr(i,1,n)   dp[i]=a[i]+dp[i-1];
    fr(i,0,n)
    {
        int sum=0;
        int curr=0;
        fr(k,0,i)
        {
            curr+=a[k];
        }
        
        fr(j,i,n)
        {
            sum=curr+dp[n-1]-dp[max(0,j-1)];
            fr(k,i,j+1)
            {
               
                sum+=!a[k];  
                 ans=max(sum,ans);   
            }
            //watch(curr); watch(sum);
       
        }

    }
    if(flag)  ans=max(ans-1,0);
    cout<<ans;
}