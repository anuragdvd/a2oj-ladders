// Translation ::

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
    string t; cin>>t; string s; cin>>s;
    bool flag=true;
    ll n=t.length();
    for(int i=0,j=n-1;i<n;i++,j--)
    {
        if(s[i]!=t[j])
        {
            flag=false; break;
        }
    }
    if(flag)    cout<<"YES";
    else    cout<<"NO";
}