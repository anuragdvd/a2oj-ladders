// Dima and Continuous Line :: https://codeforces.com/problemset/problem/358/A

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
    si(n);
    ll a[n];
    fr(i,0,n)   cin>>a[i];
    bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        int firstpoint=min(a[i],a[i+1]);
        int secondpoint=max(a[i],a[i+1]);
        for(int j=i+2;j<n-1;j++)
        {
            int third=min(a[j],a[j+1]);
            int fourth=max(a[j],a[j+1]);
            if((firstpoint<third&&third<secondpoint&&secondpoint<fourth)||(third<firstpoint&&firstpoint<fourth&&fourth<secondpoint))
            {
                     flag=true;
            }
            watch(i); watch(j);
        }
    }
    if(flag)    cout<<"yes";
    else    cout<<"no";
}