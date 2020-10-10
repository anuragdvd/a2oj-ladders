// Xenia and Ringroad :: https://codeforces.com/problemset/problem/339/B

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
    sll(n);
    sll(m);
    ll a[m];
    fr(i,0,m)   cin>>a[i];
    
    ll cost=a[0]-1;
    fr(i,1,m)
    {
        if(a[i]>a[i-1])
            cost+=a[i]-a[i-1];
        if(a[i]<a[i-1])
            cost+=n-(a[i-1]-a[i]);
       // watch(cost);
    }
    cout<<cost;
    
}