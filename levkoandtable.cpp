// Levko and Table :: https://codeforces.com/problemset/problem/361/A


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
    ll a[n][n];
    memset(a,0,sizeof(a));
    vector<ll>b(n,0); fr(i,0,n-1)    b[i]=i;
    
    fr(i,0,n)
    {
        a[i][i]=k;
    }
    
    fr(i,0,n)
    {
        fr(j,0,n)
            cout<<a[i][j]<<" ";
        nl;
    }
    
    
}
