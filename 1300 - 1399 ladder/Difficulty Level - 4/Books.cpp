// Books :: https://codeforces.com/problemset/problem/279/B

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
    // main core of this problem:: find the longest subarray with sum <= k in O(n) time (sliding window approach)
    
    si(n);
    sll(k);
    ll a[n];
    fr(i,0,n)   cin>>a[i];
    
    ll ans=0;
    
    ll start=0,end=0;
    ll sum=0;
    for(;end<n;end++)
    {
        sum+=a[end];
        if(sum<=k)
        {
            ans=max(ans,end-start+1);
        }
        if(sum>k)
        {
            while(sum>k&&start<=end)
            {
                sum-=a[start];
                start++;
            }
        }
    }
    
    cout<<ans;
    
}