// Petr and Book : https://codeforces.com/problemset/problem/139/A

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
    freopen ("input.txt","r",stdin);
    si(n);
    ll a[7];
    fr(i,0,7)   cin>>a[i];
    int ans=1;
    ll sum=n;
    int i=0;
    while(sum>0)
    {
        sum-=a[i];
        i=(i+1)%7;
        if(sum<=0)
        {
            break;
        }
        else
            ans++;
    }
    ll c=ans%7;
    if(c==0)    cout<<ans;
    else    cout<<c;
}