// Equal Rectangle :: https://codeforces.com/problemset/problem/1203/B

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
    si(q);
    while(q--)
    {
        si(n);
        ll a[4*n]; 
        fr(i,0,4*n)
        {
            cin>>a[i]; 
        }
        int lim=4*n;
        sort(a,a+lim);
        bool flag=true;
        int area=a[0]*a[lim-1];
        int i,j;
        for(i=0,j=lim-1;i<j;i+=2,j-=2)
        {

            if(a[i]*a[j]!=area||a[i+1]*a[j-1]!=area||a[i]!=a[i+1]||a[j]!=a[j-1])
            {    flag=false;  }
            
        }
        if(flag)    cout<<"YES";
        else    cout<<"NO";
        nl;
        
    }
}