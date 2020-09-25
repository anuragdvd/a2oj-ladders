// Cakeminator :: https://codeforces.com/problemset/problem/276/A

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

    si(r); si(c);
    char ch[r][c];
    fr(i,0,r)   fr(j,0,c)   cin>>ch[i][j];
    ll a[r][c]; memset(a,0,sizeof(a));
    fr(i,0,r)
    {
        bool flag=true;
        fr(j,0,c)
        {
            if(ch[i][j]=='S')
                flag=false;
        }
        if(flag)
        {
            fr(j,0,c)
                a[i][j]=1;
        }
    }
    
    fr(i,0,c)
    {
        bool flag=true;
        fr(j,0,r)
        {
            if(ch[j][i]=='S')
                flag=false;
        }
        if(flag)
        {
            fr(j,0,r)
                a[j][i]=1;
        }
    }
    ll ans=0;
    fr(i,0,r) {  fr(j,0,c)  { ans+=a[i][j];  }  }
    
    cout<<ans;
    
    
}
