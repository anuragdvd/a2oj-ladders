// Just Eat It :: https://codeforces.com/problemset/problem/1285/B

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
    si(t);
    while(t--)
    {
        si(n); 
        ll a[n];
        ll sum=0;
        fr(i,0,n)  { cin>>a[i]; sum+=a[i]; }
        ll pre[n]={0};
        pre[0]=a[0];
        fr(i,1,n-1)   pre[i]=a[i]+pre[i-1]; 
        pre[n-1]=a[n-1];
        bool flag=true;
        //watch(sum);
        fr(i,0,n)
        {
            if(pre[i]>=sum) { flag=false; }
        }
        ll suff[n]={0};
        suff[n-1]=a[n-1];
        for(int i=n-2;i>0;i--)
        {
            suff[i]=suff[i+1]+a[i];
        }
        suff[0]=a[0];
        fr(i,0,n)
        {
            if(suff[i]>=sum) {  flag=false; }
        }
        if(flag)    cout<<"YES";
        else    cout<<"NO";
        nl;
    }
}