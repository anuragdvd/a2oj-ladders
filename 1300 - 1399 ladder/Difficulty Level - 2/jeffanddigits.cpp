// Jeff and Digits  : https://codeforces.com/problemset/problem/352/A

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
    ll a[n]; 
    ll c0=0,c5=0;
    fr(i,0,n)  { cin>>a[i]; if(a[i]==0)  c0++; if(a[i]==5)   c5++; }
    if(c0==0)
        cout<<-1;
    else
    {
        if(c5==0)   cout<<0;
        else 
        { 
        ll usable=c5/9; 
        string s;
        bool flag=false;
        if(usable==0) { flag=true; } 
        while(usable--)
        {
            s+="555555555";
        }
        if(flag)
        {
            c0=0; s+="0";
        }
        while(c0--)
        {
            s+="0";
        }
        cout<<s;
        }
    }
}