// Laptops :: https://codeforces.com/problemset/problem/456/A

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
    si(n);
    vector<pair<ll,ll>> v;
    fr(i,0,n)
    {
        si(x); si(y);
        v.pb({x,y});
    }
    sort(v.begin(),v.end());
    bool flag=false;
    fr(i,0,n-1)
    {
        watch(v[i].second); watch(v[i+1].second);
        if(v[i].second>v[i+1].second)
            flag=true;
    }
    if(flag)    cout<<"Happy Alex";
    else    cout<<"Poor Alex";
}