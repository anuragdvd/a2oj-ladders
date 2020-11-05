// Insomnia cure :: https://codeforces.com/problemset/problem/148/A

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define fri(i,c,b,x) for(int i=c;i<b;i+=x)
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
    si(x); si(b); si(c); si(d);
    si(n);
    ll a[n+1]={0};
    fri(i,x,n+1,x) a[i]=1;
    fri(i,b,n+1,b) a[i]=1;
    fri(i,c,n+1,c) a[i]=1;
    fri(i,d,n+1,d) a[i]=1;
    ll ans=0;
    fr(i,1,n+1)   if(a[i])    ans++;
    cout<<ans;
}
        
