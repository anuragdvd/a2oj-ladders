// Magic Numbers :: https://codeforces.com/problemset/problem/320/A

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
    sll(n);
    ll c=0;
    bool flag=true;
    while(n>9)
    {
        ll r=n%10;
        if(r==4)    c++;
        else    c=0;
        if(c==3) {    flag=false; break; }
        if(r!=1&r!=4)  { flag=false; break; }
        n=n/10;
    }
    if(n!=1)    flag=false;
    if(flag)    cout<<"YES";
    else    cout<<"NO";
}