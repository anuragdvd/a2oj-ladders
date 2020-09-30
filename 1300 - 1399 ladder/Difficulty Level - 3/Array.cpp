// Array : https://codeforces.com/problemset/problem/300/A

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

bool comp(ll a,ll b)
{
    return a>b;
}

int main()
{
    si(n);
    ll a[n];
    fr(i,0,n)   cin>>a[i];
    sort(a,a+n,comp);
    vector<ll> v1, v2, v3;
    ll neg=0;
    bool flag=true;
    int k=0;
    fr(i,0,n)   if(a[i]<0)  neg++;
    for(auto i:a)
    {
        if(i<0&&neg%2!=0&&flag)
            v1.pb(i), flag=false;
        else if(i<0&&neg%2==0&&flag)
        {
            v1.pb(i); flag=false;
        }
        else if(i<0&&neg>2&&k<2)
        {
            v2.pb(i); k++;
        }
        else if(i<0&&neg%2==0&&!flag)
        {
            v3.pb(i);
        }
        else if(i==0)   v3.pb(0);
        else
            v2.pb(i);
    }
    
    cout<<v1.size()<<" ";
    for(auto i:v1)   cout<<i<<" ";
    nl;
    cout<<v2.size()<<" ";    
    for(auto i:v2)   cout<<i<<" ";
    nl;
    cout<<v3.size()<<" ";    
    for(auto i:v3)   cout<<i<<" ";
    nl;
    
}