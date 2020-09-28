// Little Dima and Equation :: https://codeforces.com/problemset/problem/460/B

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

ll sum(ll n)
{
    ll ans=0;
    while(n>0)
    {
        ans+=n%10; n/=10;
    }
    return ans;
}

int main()
{
    /* x=b.s(x)^a + c
      s(999 999 999) = 81 
      2*(1)^3 + 8 == 10
      2*(2)^3 + 8 == 2*8+8 = 16 + 8= 24  but S(24) != 2 
     try to check every S(x) value 
    */
    
    si(a); si(b); si(c);
    
    int count=0; vector<ll> ans;
    
    fr(i,1,82)
    {
        ll val=b*pow(i,a)+c;
        if(sum(val)==i&&val<1000000000) { count++; ans.pb(val); }
    }
    
    cout<<count<<endl;
    for(auto i:ans) cout<<i<<" ";
}