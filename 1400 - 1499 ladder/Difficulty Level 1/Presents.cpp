// Presents :: https://codeforces.com/problemset/problem/136/A

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
    si(n);
    ll a[n]; fr(i,0,n)  cin>>a[i];
    ll b[n+1];
    fr(i,0,n)   b[a[i]]=i+1;
    fr(i,1,n+1) cout<<b[i]<<" ";
    
}
        
