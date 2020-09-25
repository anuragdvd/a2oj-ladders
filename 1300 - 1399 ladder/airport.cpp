// Airport :: http://codeforces.com/problemset/problem/218/B

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
    si(m); si(n);
    vector<ll> a; fr(i,0,n) { sll(x); a.pb(x);  }
    vector<ll> b=a;
    ll mn=0,mx=0;

    ll c=0;
    while(c!=m)
    {
    mn+=a[0];    a[0]--;  
    if(a[0]==0) { a[0]=INT_MAX; }
    sort(a.begin(),a.end());
    c++;
    }
    c=0;
    while(c!=m)
    {
        sort(b.begin(),b.end());
        mx+=b[n-1]; b[n-1]--;

        if(b[n-1]==0) b[n-1]=INT_MIN;
      
        
        c++;
    }
    cout<<mx<<" "<<mn;
}