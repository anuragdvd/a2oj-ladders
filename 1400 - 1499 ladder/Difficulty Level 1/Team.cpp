// Team :: https://codeforces.com/problemset/problem/231/A

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
    unordered_map<int,int> mp;
    fr(i,0,n)
    {
        si(x); si(y); si(z);
        if(x==1)    mp[i]++;
        if(y==1)    mp[i]++;
        if(z==1)    mp[i]++;
    }
    int ans=0;
    fr(i,0,n)
    {
        if(mp[i]>=2)    ans++;
    }
    cout<<ans;
}
        
