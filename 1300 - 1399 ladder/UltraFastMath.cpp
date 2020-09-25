// Ultra-Fast Mathematician :: https://codeforces.com/problemset/problem/61/A

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
    string a; cin>>a; string b; cin>>b;
    string ans;
    fr(i,0,a.length())
    {
        if(a[i]!=b[i])
        {
            ans+='1';
        }
        else    ans+='0';
    }
    cout<<ans;
}