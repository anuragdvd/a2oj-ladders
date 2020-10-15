// Ciel and Flowers :: https://codeforces.com/problemset/problem/322/B

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
    sll(r); sll(g); sll(b);
    
    ll ans=0;
    int c=0; if(r%3==0) c++; if(g%3==0) c++; if(b%3==0) c++;
    if(r==0||b==0||g==0)
    {
        ans=(r/3)+(b/3)+(g/3);
    }
    else if(c>1)
    {
        ans+=(r/3)+(b/3)+(g/3);
    }
    else{
       ans+=(r/3)+(b/3)+(g/3);
       r=r%3; b=b%3; g=g%3;
       if(r==0) r+=3,ans--; if(b==0)  b+=3,ans--; if(g==0)  g+=3,ans--;
       ans+=min(min(r,b),g);
    }
    cout<<ans;
}