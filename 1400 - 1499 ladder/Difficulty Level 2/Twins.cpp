// Twins :: https://codeforces.com/problemset/problem/160/A

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
    ll a[n];
    fr(i,0,n)   cin>>a[i];
    sort(a,a+n);
    ll pre[n+1]={0};
    ll suf[n+1]={0};
    pre[1]=a[0];
    fr(i,2,n+1)   pre[i]=pre[i-1]+a[i-1];
    suf[n]=a[n-1];
    suf[0]=0;
    for(int i=n-1;i>0;i--) suf[i]=suf[i+1]+a[i-1];
    
    int c=0;
    
    for(int i=n;i>0;i--)
    {
        c++;
      
        if(suf[i]>pre[i-1])
        {
            break;
        }
    }
    cout<<c;
    
}