// Maximum Absurdity :: https://codeforces.com/problemset/problem/332/B

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
    ll a[n+1]; fr(i,1,n+1)  cin>>a[i];
    ll dp[n+1]={0};
    fr(i,1,n+1)
    {
        dp[i]=dp[i-1]+a[i];
      
    }
    
    vector<ll> ranges(n+1);
    
    fr(i,1,n+1)
    {
    	//watch(dp[i+k-1]); watch(dp[i]);
        ranges[i]=dp[min(n,i+k-1)]-dp[i-1];
    
    }
    
    multiset<ll,greater<ll>> largest;
    
    fr(i,k+1,n+1) largest.insert(ranges[i]);
    
    
    ll mx=0; vector<ll> ans(2);
    auto it=largest.begin();
    fr(i,1,n+1)
    {
    	
        if(largest.size()==0)   break;
      
        if(*it+ranges[i]>mx)
        {
            mx=*it+ranges[i];
            ans[0]=*it;
            ans[1]=i;
        }
        largest.erase(largest.lower_bound(ranges[i+k]));
        it=largest.begin();
    }
   
    
    fr(i,k+1,n+1)
    {
    	if(ans[0]==ranges[i]&&i-ans[1]>=k)
    	{
    		ans[0]=i; break;
    	}
    }

    cout<<ans[1]<<" "<<ans[0];
    
}