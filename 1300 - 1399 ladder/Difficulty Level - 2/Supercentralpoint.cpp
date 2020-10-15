// Supercentral Point : https://codeforces.com/problemset/problem/165/A

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
    ll a[n],b[n];
    fr(i,0,n)
    {
        cin>>a[i]; cin>>b[i];
    }
    int ans=0;
    fr(i,0,n)
    {
        bool f1=false,f2=false,f3=false,f4=false;
        fr(j,0,n)
        {
            if(i!=j)
            {
                if(a[j]>a[i]&&b[i]==b[j])   f1=true;
                if(a[j]<a[i]&&b[i]==b[j])   f2=true;
                if(a[i]==a[j]&&b[i]<b[j])   f3=true;
                if(a[i]==a[j]&&b[i]>b[j])   f4=true;
            }
        }
        if(f1&&f2&&f3&&f4)  ans++;
    }    
    cout<<ans;
}