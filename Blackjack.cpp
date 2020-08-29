// Black Jack :: https://codeforces.com/problemset/problem/104/A

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
    ll req=n-10;
    ll ans;
    if(req<=0)  ans=0;
    else if(req<10&&req!=0)  ans=4;
    else if(req==10) ans=15;
    else if(req==11)  ans=4;
    else    ans=0;
    cout<<ans;
    
}
