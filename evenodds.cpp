// Even Odds : https://codeforces.com/problemset/problem/318/A

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
    sll(n); sll(k);
    if(n%2==0)
    {
        ll half=n/2;
        if(k<=half)
        {
            cout<<2*k-1;
        }
        else
        {
            cout<<(2*(k-half));
        }
    }
    else
    {
        ll half=n/2;
        half++;
        if(k<=half)
        {
            cout<<2*k-1;
        }
        else
        {
            cout<<(2*(k-half));
        }
    }
}