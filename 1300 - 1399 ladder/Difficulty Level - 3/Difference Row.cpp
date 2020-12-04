// Difference Row :: https://codeforces.com/problemset/problem/347/A

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
#define M 4294967296
#define pb push_back
#define BLK 548 
 
typedef long long int ll;
 
using namespace std;

int main()
{
    // (x1 + x2 + x3 + ... + xn-1) -(x2+x3+x4...+xn)
    //x1-xn
    
    si(n); 
    ll a[n]; 
    fr(i,0,n)   cin>>a[i];
    sort(a,a+n);
    swap(a[0],a[n-1]);
    for(int i:a)    cout<<i<<" ";
    
}