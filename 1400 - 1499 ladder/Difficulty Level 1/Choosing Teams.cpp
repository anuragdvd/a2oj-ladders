// Choosing Teams :: https://codeforces.com/problemset/problem/432/A

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
    ll a[n]; 
    fr(i,0,n)   cin>>a[i];
     sort(a,a+n);
    fr(i,0,n)   a[i]=k+a[i];
    ll ans=0;
    for(int i=2;i<n;i+=3)
    {
       // watch(a[i]);
        if(a[i]<=5)  ans++;
    }
    cout<<ans;
}
        

