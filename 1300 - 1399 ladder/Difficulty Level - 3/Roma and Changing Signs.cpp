// Roma and Changing Signs :: https://codeforces.com/problemset/problem/262/B

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
    si(n); si(k);
    ll a[n]; fr(i,0,n) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]<0&&k>0)
        {
            k--; a[i]*=-1;
        }
    }
    if(k>0)
    {
        sort(a,a+n);
        if(k%2!=0)  a[0]*=-1;
    }
    ll sum=0; 
    fr(i,0,n)   sum+=a[i];
    cout<<sum;
}