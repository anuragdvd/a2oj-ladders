// Lucky Division :: https://codeforces.com/problemset/problem/122/A

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
    vector<ll> v;
    v.pb(0);
    int k=0;
    while(1)
    {
        int val=v[k]*10+4;
        v.pb(val);
        val=v[k]*10+7;
        v.pb(val);
        k++;
        if(val>2000)    break;
    }
    bool flag=false;
    for(auto i:v)
    {
        if(i!=0&&n%i==0)
        {
            flag=true;
            break;
        }
    }
    if(flag)    cout<<"YES";
    else    cout<<"NO";
    
}