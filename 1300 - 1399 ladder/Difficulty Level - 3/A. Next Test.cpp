// A. Next Test :: https://codeforces.com/problemset/problem/27/A

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
    //simple MEX problem

    si(n);
    ll a[n];
    ll mx=INT_MIN;
    map<ll,ll> mp; 
    fr(i,0,n)  cin>>a[i];
    fr(i,0,n)  mp[a[i]]++, mx=max(mx,a[i]);
    fr(i,1,mx+2)
    {
        if(mp.find(i)==mp.end())
        {
            cout<<i; break;
        }
    }
}