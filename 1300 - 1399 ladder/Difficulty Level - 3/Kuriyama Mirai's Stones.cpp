// Kuriyama Mirai's Stones :: https://codeforces.com/problemset/problem/433/B

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
#define inf 1000000001

typedef long long int ll;

using namespace std;

int main()
{
    // Simple prefix array question. Segment tree will also work but it will be overkill 
    
    si(n);
    ll a[n];
    fr(i,0,n)   cin>>a[i];
    
    ll pre1[n+1];
    pre1[0]=0;
    pre1[1]=a[0];
    fr(i,2,n+1)   pre1[i]=a[i-1]+pre1[i-1];
    
    sort(a,a+n);
    
    ll pre2[n+1];
    pre2[0]=0;
    pre2[1]=a[0];
    fr(i,2,n+1)   pre2[i]=a[i-1]+pre2[i-1];
    
    
    si(q);
    while(q--)
    {
        si(k); si(l); si(r);
        if(k==1)
        {
            cout<<pre1[r]-pre1[max(0,l-1)];
        }
        else
        {
            cout<<pre2[r]-pre2[max(0,l-1)];
        }
        nl;
        
        
    }
    
    
}